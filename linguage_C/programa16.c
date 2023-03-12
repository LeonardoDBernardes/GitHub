#include <stdio.h>

int main()
{
    double n1, n2, result;
    printf("digite dois numeros separando por enter para obter uma divisao deles:\n\r");
    scanf("%f %f", &n1, &n2);
    result = n1 / n2;
printf("o resultado do numero %f com %f e: %.3f", n1, n2, result);
}