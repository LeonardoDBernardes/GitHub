#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
    int idade;

    printf("olá, digite sua idade para saber se você já pode votar ou dirigir e votar.\n");
scanf("%d", &idade);
if(idade >=18) {
printf("pode dirigir e votar");
}
else if(idade <16) {
    printf("você não pode votar nem dirigir");
}
else {
    printf("você pode apenas votar");
    }
    return 0;
    system("pause");
    }