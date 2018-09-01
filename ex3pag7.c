#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale (LC_ALL "");
    int num,quadrado;
    printf("Digite um número inteiro \n");
    scanf("%f",&num);
    quadrado=num*num;
    printf("O quadrado desse número inteiro é %.f",quadrado);
    return 0;
}
