#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int op;
    printf("Digite um valor entre [1-3] \n");
    scanf("%d",&op);
    switch(op)
    {
       case 1:
           printf("Voc� escolheu a op��o 1 \n");
           printf("Boa noite \n");
           printf("Boa prova \n");
           break;
       case 2:
           printf("Voc� escolheu a op��o 2 \n");
           break;
       case 3:
           printf("Voc� escolheu a op��o 3 \n");
           break;
       default:
           printf("Op��o inv�lida");
    }
    return 0;
}
