#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int idade;
printf("digite sua idade:\n\r");
scanf("%d", &idade);
int dias = idade * 365;
int horas = dias * 24;
int min = horas * 60;
int seg = min * 60;
printf("voce viveu: %d dias\n%d horas\n%d minutos\n%d segundos", dias, horas, min, seg);
system("pause");
return 0;
}