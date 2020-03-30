#include <stdio.h>

int myfunction(int a, int b);
void myswap(int* a, int* b);

int main(int argc, char* argv[]) {
    int a = 10;
    int b = 8;
    int r = myfunction(3, 4);
    printf("result=%d\n", r);
    printf("a=%d, b=%d\n", a, b);
    myswap(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return 0;
}
