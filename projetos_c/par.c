#include <stdio.h>

int main(void)
{
    int numero;
    printf("digite um inteiro\n\r");
    scanf("%d", &numero);
    if( (numero % 2) == 0)
    {
       printf("He par\n");
    }
    else {
printf("nao eh par");
       }
}