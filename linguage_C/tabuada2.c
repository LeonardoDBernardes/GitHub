#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void) {
    int num, mult, i;
    printf("Digite a tabuada:");
    scanf("%d", &num);
fflush(stdin);
    scanf("%d", &mult);
    for(i = 0; i <= mult; i++) {
        printf("%d vezes %d igual a %d.\n", num, i, num*i);
    
    }

    return 0;
    system("pause");
}