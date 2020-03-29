#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/types.h>

#include "shmconstant.h"


int main(int argc, char* argv[]) {
    int shmfd = shm_open(SHMNAME, O_RDWR | O_CREAT, 0660);

    if (shmfd == -1){
        perror("cannot open shared memory");
        return 1;
    }
    if(ftruncate(shmfd, SHMSIZE) == -1) {
        perror("ftruncate call error");
        return 1;
    }

    char* ptr = mmap(NULL, SHMSIZE, PROT_READ|PROT_WRITE, MAP_SHARED, shmfd, 0);

    if(ptr == NULL) {
        perror("mmap failed");
        return 3;
    }

    for(int i = 0 ; i < 10 ; i++) {
        sprintf(ptr, "iteration %d", i);
        sleep(1);
    }

    if(shm_unlink(SHMNAME) == -1) {
        perror("cannot remove the shared memory\n");
    }

    return 0;
}
