#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i, x;
    x = 0;
    for(i = 1; i <= 1000; i++)
    {
        if(i%35 == 0)
        {
    x += 1;
        }
    }
    printf("existem %d multiplos de 35 dentro de 1000.", x);
    return 0;
system("pause");
    }