#include <stdio.h>
#include <limits.h>

int main() {
    int a = 2000000000;
    int b = 2000000000;
    long long c = 2000000000;

    a = a + b ;
    c = c + c;

    printf("O resultado de a: %d", a);
    printf("O resultado de c: %lu",(unsigned long) c);
    return 0;
}

// O resultado de a: -294967296O resultado de c: 4000000000