#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/types.h>

#include "shmconstant.h"


int main(int argc, char* argv[]) {
    int shmfd = shm_open(SHMNAME, O_RDONLY, 0660);

    if (shmfd == -1){
        perror("cannot open shared memory");
        return 1;
    }

    char* ptr = mmap(NULL, SHMSIZE, PROT_READ, MAP_SHARED, shmfd, 0);

    if(ptr == NULL) {
        perror("mmap failed");
        return 3;
    }

    printf("Content of shared memory: %s\n", ptr);

    return 0;
}
