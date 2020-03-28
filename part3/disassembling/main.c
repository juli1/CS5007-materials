#include <stdio.h>

int addmanyarguments(int a, int b) {
    int c = 0;
    int d = 3;
    int e = 0;
    int f = 3;
    int g = 0;
    int h = 3;
    int i = 0;
    int j = 3;
    int k = a + b + c + d + e + f + g + h + i + j;
    return k;
}


int add(int a, int b) {
    int c = 0;
    int d = 3;
    int e = a + b + c + d;
    return e;
}

int main(int argc, char* argv[]) {
    int v = 2;
    int w = 3;
    int z = v + w;
    printf("result = %d\n", z);
    printf("result = %d\n", add(v, w));
    return 0;
}
