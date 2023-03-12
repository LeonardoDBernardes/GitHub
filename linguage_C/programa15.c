#include <stdio.h>

int main()
{
    int n1, n2, result;
    printf("digite dois numeros para ter a subitracao, separe eles com a tecla enter.\n");
    scanf("%d %d", &n1, &n2);
    result=n1-n2;
    printf("o resultado da subricacao dos numeros %d e %d e: %d", n1, n2, result);

}