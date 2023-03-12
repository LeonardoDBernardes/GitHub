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
for(i = 1; i <= numero; i++) {
ant = fat;
fat = ant * i;
}
printf("O fatorial de %d é %d.", numero, fat);
system("pause");
}