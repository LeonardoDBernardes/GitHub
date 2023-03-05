#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


voide mensagem(char *msg);
voide mensagem(char *msg)
{
    printf("%s\n", msg);
}
int main(voide)
{
    setlocale(LC_ALL,"");
    mensagem("oi essa é a primeira linha");
    mensagem("essa é a segunda linha");
    system("pause");
    return 0;
}
}
