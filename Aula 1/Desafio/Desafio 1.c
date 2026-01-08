#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Meu nome é Matheus\n");
    printf("Estamos em 2026\n");
    printf("Em 2030 vou ter 29 anos\n");
    return 0;
}