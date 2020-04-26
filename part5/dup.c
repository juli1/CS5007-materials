#include <stdio.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#include "constants.h"


int main(int argc, char* argv[]) {

    int fd = open(FILE_TO_WRITE, O_CREAT | O_WRONLY, S_IRWXU);

    if (fd == -1) {
        printf("error when opening the file\n");
        return 1;
    }

    if (dup2(fd, STDOUT_FILENO) == -1) {
        printf("error when calling dup2()\n");
    }


    printf("Hello from our program\n");

    
    return 0;
}
