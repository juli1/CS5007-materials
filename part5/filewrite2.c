#include <stdio.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#include "constants.h"


int main(int argc, char* argv[]) {

    FILE* fd = fopen(FILE_TO_WRITE, "a+");

    if (fd == NULL) {
        printf("error when opening the file\n");
        return 1;
    }

    int write_ret = fwrite("foobar", 1, 6, fd);
    if (write_ret != 6) {
       printf("write() returned %d", write_ret);
    }
    if(fclose(fd)) {
        printf("close() did not finish as expected\n");
    }
    
    return 0;
}
