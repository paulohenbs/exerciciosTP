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

    printf("Digite três valores inteiros \n");
    scanf("%d %d %d",&a,&b,&c);
    if((a==b) && (a==c))
    {
        printf("Os valores são iguais \n");
        printf("Parabéns");
    }
    else
    {
        printf("São diferentes");
    }
    return 0;
}
