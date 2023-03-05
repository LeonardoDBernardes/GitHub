#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
//declaração das variaveis
float nota1, nota2, nota3, nota4, media;
char nome[40];

//preenchimento dos dados
printf("ola, seja benvindo ao calculador de media.\nNos proximos passos preenxa com os dados que sao pedidos.\n");
printf("informe seu nome completo:\n\r");
gets(nome);
fflush(stdin);
printf("informe a primeira nota:\n\r");
scanf("%f", &nota1);
printf("informe a segunda nota:\n\r");
scanf("%f", &nota2);
printf("informe a terceira nota:\n\r");
scanf("%f", &nota3);
printf("informe a quarta nota:\n\r");
scanf("%f", &nota4);

//processamento
media = (nota1 + nota2 + nota3 + nota4) /4;

//lógica para aprovação
if(media >= 7)
{
    printf("%s sua media eh: \n%.2f voce foi aprovado!", nome, media);
}
    else if(media < 6)
    {
        printf("%s sua media eh:\n%.2f voce foi reprovado!", nome, media);
    }
    else
    {
        printf("%s sua media eh:\n %.2f voce está em recuperacao.", nome, media);
    }

return 0;
system("pause");
}