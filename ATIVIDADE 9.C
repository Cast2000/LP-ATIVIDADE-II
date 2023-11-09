#include <stdio.h>

int main()
{
    int subtracao;
    int soma;
    int numero1;
    int numero2;
    char operacao;
    int resultado;
   
   
    printf("DIGITE O PRIMIRO NUMERO\n");
    scanf("%d",&numero1);
   
   
   printf("DIGITE O SEGUNDO NUMERO\n");
    scanf("%d",&numero2);  
   
   
    printf("DIGITE A OPERACAO DESEJADA \n");
    scanf("%s",&operacao);
   
   
     switch (operacao) {
     case '+':
            soma = numero1 + numero2;
             resultado = soma;
            break;
        case '-':
            subtracao = numero1 - numero2;
             resultado = subtracao;
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }
   
   
    printf("RESULTADO:%d\n", resultado);
   
   
   
   
   
   
   
   
   
   
   
   
   

    return 0;
}