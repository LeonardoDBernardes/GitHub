#include <stdio.h>

int main()
{
int soma = 1+1;
    printf("1 + 1 = %d\n", soma);
    int numero1 = 10;
    int numero2 = 20;
    soma = numero1 + numero2;
    printf("%d + %d = %d\n", numero1, numero2, soma);
    printf("%d - %d = %d\n", soma, numero1, (soma-numero1));
}