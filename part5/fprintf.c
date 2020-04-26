#include <stdio.h>

#include "constants.h"


int main(int argc, char* argv[]) {

    FILE* fd = fopen(FILE_TO_WRITE, "a+");

    if (fd == NULL) {
        printf("error when opening the file\n");
        return 1;
    }

    fprintf(fd, "Hello, my name is %s\n", NAME);

    if(fclose(fd)) {
        printf("close() did not finish as expected\n");
    }
    
    return 0;
}
