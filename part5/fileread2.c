#include <stdio.h>

#include "constants.h"


int main(int argc, char* argv[]) {

    FILE* fd = fopen(FILE_TO_WRITE, "r");
    char buf[MAX_READ_SIZE];

    if (fd == NULL) {
        printf("error when opening the file\n");
        return 1;
    }

    int read_ret = fread(buf, 1, MAX_READ_SIZE, fd);
    if (read_ret == -1) {
       printf("error when calling read()\n");
    }
    printf("read() got %d bytes, result=%s\n", read_ret, buf);
    if(fclose(fd)) {
        printf("close() did not finish as expected\n");
    }
    
    return 0;
}
