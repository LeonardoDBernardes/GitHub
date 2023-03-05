#include <stdio.h>
#include <stdlib.h>

int main(void)
{
float a, b, c;
printf("Digite três valores:");
scanf("%.2f%.2f%.2f", &a, &b, &c);
if((a<b+c) || (b<a+c) || (c<a+b))
{
printf("Esses números formam um triângulo.");
if((a == b) && (b == c))
{
printf("Este é um triângulo equilátero.\n");
}
else if(((a == b) && (b != c)) || ((a == c) && (c != b)) || ((b == c) && (c != a)))
{
                      printf("Este é um triângulo isósceles.\n");
}
else
{
                      printf("Este é um triângulo escaleno.\n");
}
}
else
{
                      printf("Estes valores não formam um triângulo.\n");
}
return 0;
system("pause");
}