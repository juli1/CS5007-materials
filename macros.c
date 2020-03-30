#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char* argv[]){
    int v = 2000;

    if (v > CHAR_MAX) {
        printf("max limit at file %s line %d", __FILE__, __LINE__);
    }
    exit(EXIT_SUCCESS);
}
