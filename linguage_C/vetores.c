#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL,"");
    int numero[6];
    int i = 0;
    printf("digite seis números\n");
for(i = 0; i <=5; i++)
{
    scanf("%d", &numero[i]);
}
printf("os números são:\n");
for(i = 0; i <=5; i++)
{
    printf("%d\n", numero[i]);
}
system("pause");
return 0;
}
