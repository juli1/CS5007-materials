#include <stdio.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#include "constants.h"


int main(int argc, char* argv[]) {

    int fd = open(FILE_TO_WRITE, O_CREAT | O_WRONLY,  S_IRWXU);

    if (fd == -1) {
        printf("error when opening the file\n");
        return 1;
    }

    int write_ret = write(fd, "foobar", 6);
    if (write_ret != 6) {
       printf("write() returned %d", write_ret);
    }
    if(close(fd)) {
        printf("close() did not finish as expected\n");
    }
    
    return 0;
}
