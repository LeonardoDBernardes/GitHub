#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void)
{
setlocale(LC_ALL,"");
    int fat,
    numero,
    ant,
    i;
    ant = 1;
    fat = 1;
    printf("digite o número a ser fatorado");
    scanf("%d", numero);
    for(i = 1;
    i <= numero;
    i++)
{
ant = fat;
fat = ant * i;
}
printf("o fatorial de %d é %d.", numero, fat);
system("pause");
}