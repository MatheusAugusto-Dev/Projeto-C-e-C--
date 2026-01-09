#include <stdio.h>

int main() {
    printf("int: %lu bytes\n", (unsigned long) sizeof(int));
    printf("float: %lu bytes\n", (unsigned long) sizeof(float));
    printf("double: %lu bytes\n", (unsigned long) sizeof(double));
    printf("char: %lu bytes\n", (unsigned long) sizeof(char));

    return 0;
}
