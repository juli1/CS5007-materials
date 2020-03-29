#include <stdio.h>

#include <sys/types.h>
#include <unistd.h>


int main(int argc, char* argv[]) {
    printf("Starting a new program\n");

    int f = fork();

    if (f == -1) {
        printf("error when trying to fork\n");
        return 1;
    }

    if (f == 0) {
        printf("I am in the child, my pid is %d, my parent pid is %d\n", getpid(), getppid());
        for (int i = 0 ; i < 10 ; i++) {
            printf("I am in the child, iteration %i\n", i);
            sleep (1);
        }
    } else {
        printf("I am in the parent, my pid is %d, the child  pid is %d\n", getpid(), f);
        for (int i = 0 ; i < 5 ; i++) {
            printf("I am in the parent, iteration %i\n", i);
            sleep (1);
        }
    }

    
    return 0;
}
