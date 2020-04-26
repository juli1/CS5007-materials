#include <stdio.h>

#include "constants.h"


int main(int argc, char* argv[]) {

    FILE* fd = fopen(FILE_TO_WRITE, "r");
    char buf[MAX_READ_SIZE];

    if (fd == NULL) {
        printf("error when opening the file\n");
        return 1;
    }

    int m = fscanf(fd, "Hello, my name is %s", buf);

    if(m > 0) {
        printf("fscanf() returns %d item, result = %s\n", m, buf);
    }
    else {
        printf("fscanf() returns nothing\n");
    }

    if(fclose(fd)) {
        printf("close() did not finish as expected\n");
    }
    
    return 0;
}
