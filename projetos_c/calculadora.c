#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void calculadora(void);
void confirme(void);
int soma(int n1, n2);
int divisao(int n1, n2);
int multiplicacao(int n1, n2);
int subritacao(int n1, n2)

// linha para confirmar a saida do programa
void confirme(void)
{
char opc;
fflush(stdin);
scanf("%c", &opc);
switch(opc)
{
case 's':
return calculadora();
break;
case 'n':
exit(1);
break;
default:
printf("opicao invalida;\ndeseja realizar mais uma conta?");
return confirme();
break;
}
}

//calculadora
void calculadora(void)
int n1, n2, opc;

{
printf("digite dois numeros separados por enter");
scanf("%d %d", &int n1, &int n2);
fflush(stdin);
printf("\nescolha operacao:\n\r"
"1:soma\n\r"
"2:divisao\n\r"
"3:subtracao\n\r"
"4:multiplicacao\n\r");
scanf(" %d", &opc);

switch(opc)
{
case 1:
printf("Resultado: %d.\n", soma(int n1, n2));
printf("deseja fazer mais algum calculo?\n");
fflush(stdin);
return confirme();
break;

case 2:
printf("resultado: %d.\n", divisao(int n1, n2));
printf("deseja fazer mais algum calculo?\n");
fflush(stdin);
break;

case 3:
printf("Resultado: %d.\n", subtracao(int n1, n2));
printf("deseja fazer mais algum calculo?\n");
fflush(stdin);
break;

case 4:
printf("Resultado: %d.\n", multiplicacao(int n1, n2));
printf("deseja fazer mais algum calculo?\n");
fflush(stdin);
return confirme();
break;
default:
printf("opicao invalida.");
fflush(stdin);
return calculadora();
break;
}
}

int main(void) {
printf("benvindo a calculadora!");
calculadora();
return 0;
system("pause");
}