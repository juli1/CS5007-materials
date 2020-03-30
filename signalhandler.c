#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

void handler(int sig, siginfo_t* info, void* ucontext) {
    printf("I received signal %d\n", sig);
}


int main(int argc, char* argv[]) {
    char entry[1024];
    struct sigaction action;
    sigemptyset(&action.sa_mask);
    sigaddset(&action.sa_mask, SIGINT);
    sigaddset(&action.sa_mask, SIGUSR1);
    action.sa_flags = 0;
    action.sa_sigaction = handler;
    
    if (sigaction(SIGINT, &action, NULL) == -1){
        perror("cannot set signal handler\n");
    }

    if (sigaction(SIGUSR1, &action, NULL) == -1){
        perror("cannot set signal handler\n");
    }

    printf("My PID is %d\n", getpid());

    while(1) {
        int n = read(STDIN_FILENO, entry, 1024);
        if (n > 0) {
            if(strncmp(entry, "quit", 4) == 0) {
                exit(EXIT_SUCCESS);
            }
        }
        if(errno == EINTR){
            printf("read interrupted because of interrupt\n");
        }
    }
    exit(EXIT_SUCCESS);
}
