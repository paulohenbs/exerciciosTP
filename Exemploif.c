#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "");
    char nome [50];
    int a,c,b;
    printf ("Digite um nome \n");
    gets(nome);
    printf("O nome digitado foi %s \n\n",nome);

    printf("Digite tr�s valores inteiros \n");
    scanf("%d %d %d",&a,&b,&c);
    if((a==b) && (a==c))
    {
        printf("Os valores s�o iguais \n");
        printf("Parab�ns");
    }
    else
    {
        printf("S�o diferentes");
    }
    return 0;
}
