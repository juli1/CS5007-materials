#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
    char* s = malloc(6);
    strcpy(s, "bonjour");
    printf("string: %s\n", s);
    s[3] = 'b';
    printf("string: %s\n", s);

    int b = 42;
    int* p = &b;

    printf("b=%d p=%d\n", b, *p);
    *p = 51;
    printf("b=%d p=%d\n", b, *p);

    int v[] = {1,2,3,4};
    int* i = v;
    int* i2 = i + 3;
    unsigned char* c = (unsigned char*) &v[0];
    unsigned char* c2 = c + 1;
    *c2 = 1;
    printf("%d\n", *c2);
    printf("%d\n", v[0]);
    printf("%d\n", *i2);

    return (EXIT_SUCCESS);
}
