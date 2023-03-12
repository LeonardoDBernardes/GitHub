#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void calculadora(void);
void confirme(void);
// Confirma saida do programa
void confirme(void)
{
    char opc;
    fflush(stdin);
    scanf("%s",&opc);
switch(opc)
    {
        case 's':
        return calculadora();
        break;
        case 'n':
        exit(1);
        break;
        default:
        printf("Opcao invalida.\nDeseja realizar mais uma conta?");
        return confirme();
        break;
    }
}
// Calculadora
void calculadora(void)
{
    int n1, n2, result, opc;
    printf("Digite dois numeros, separados por enter:");
    scanf("%d%d", &n1, &n2);
    fflush(stdin);
printf("\nEscolha uma operacao:\n\r"
    "1: soma\n\r"
    "2: divisao\n\r"
    "3: subtracao\n\r"
    "4: Multiplicacao\n\r");
    scanf(" %d", &opc);
    
switch(opc)
    {
        case 1:
        result = n1+n2;
        printf("n1 + n2 = %d", result);
        printf("Deseja realizar mais um calculo?\n");
        fflush(stdin);
        return confirme();
        break;
    
case 2:
        result = n1/n2;
        printf("N1 dividido por n2 = %d", result);
        printf("Deseja realizar mais um calculo?\n");
        fflush(stdin);
        return confirme();
        break;
        case 3:
        result = n1-n2;
        printf("n1 menos n2 = %d", result);
        printf("Deseja realizar mais um calculo?\n");
        fflush(stdin);
        return confirme();
        break;
        
        case 4:
        result = n1*n2;
        printf("n1 vezes n2 = %d", result);
        printf("Deseja realizar mais um calculo?\n");
        fflush(stdin);
        return confirme();
        break;
        default:
        printf("Opcao invalida.\n");
        fflush(stdin);
        return calculadora();
        break;
    }   
}
int main(void) {
    printf("Bem-vindo a calculadora!");
    calculadora();
    return 0;
    system("pause");
}