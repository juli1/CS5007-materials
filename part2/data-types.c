#include <stdio.h>
#include <stdlib.h>

struct person {
    char* firstname;
    char* lastname;
    int   age;
};

enum class_part {
    part1 = 1,
    part2 = 2,
    part3 = 3
};

union unsigned_value {
    unsigned char small;
    unsigned long big;
};

int main(int argc, char* argv[]) {
    struct person teacher;
    teacher.age = 22;

    printf("the teacher is %d years old\n", teacher.age);

    enum class_part cp;
    cp = part1;

    printf("cp = %d\n", cp);

    union unsigned_value uv;
    uv.small = 8;

    printf("value = %u\n", uv.small);

    uv.big = 45698987;

    printf("value = %u\n", uv.small);
    printf("value = %lu\n", uv.big);

    int array[2];
    array[0] = 2;
    array[1] = 3;

    printf("value of array[1] = %d\n", array[1]);

    return (EXIT_SUCCESS);
}
