#include <stdio.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#include "constants.h"


int main(int argc, char* argv[]) {

    int fd = open(FILE_TO_WRITE, O_RDONLY);
    char buf[MAX_READ_SIZE];

    if (fd == -1) {
        printf("error when opening the file\n");
        return 1;
    }

    int read_ret = read(fd, buf, MAX_READ_SIZE);
    if (read_ret == -1) {
       printf("error when calling read()\n");
    }
    printf("read() got %d bytes, result=%s\n", read_ret, buf);
    if(close(fd)) {
        printf("close() did not finish as expected\n");
    }
    
    return 0;
}
