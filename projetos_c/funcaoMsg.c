#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void mensagem(char *msg, char *msg2);

void mensagem(char *msg, char *msg2)
{
    printf("%s\n%s\n", msg, msg2);
}

int main(void)
{
    setlocale(LC_ALL,"");
    char nome[20] = "leonardo";
    mensagem("oi essa é a primeira linha", nome);
    mensagem("essa é a segunda linha", nome);
    mensagem("meu nome é", nome);
    system("pause");
    return 0;
}