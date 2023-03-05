#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fatorial(int numero);

int fatorial(int numero) {
if(numero == 1 || numero == 0) {
return 1;
}
return fatorial(numero-1)*numero;
}

void main(void) {
int numero;
setlocale(LC_ALL,"");

printf("Digite o número a ser fatorado:");
scanf("%d", &numero);
printf("O fatorial de %d é %d.", numero, fatorial(numero));
system("pause");
}