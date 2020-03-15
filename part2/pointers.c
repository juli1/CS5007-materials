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
    return (EXIT_SUCCESS);
}
