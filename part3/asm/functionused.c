#include <stdio.h>

int myfunction(int a, int b);

int main(int argc, char* argv[]) {
    int r = myfunction(3, 4);
    printf("result=%d\n", r);
}
