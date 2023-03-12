#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(void) {
int ant, fat, i, numero;

ant = 1;
fat = 1;
setlocale(LC_ALL,"");

printf("Digite um número a ser fatorado:");
scanf("%d", &numero);
while(i <= numero) {
ant = fat;
fat = ant * i;
i++;
}
printf("O fatorial de %d é %d.", numero, fat);
system("pause");
}