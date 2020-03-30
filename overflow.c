#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char* argv[]){
    unsigned char c = 200;
    printf("c = %u\n", c);
    c = c * 3;
    printf("c = %u\n", c);
    exit(EXIT_SUCCESS);
}
