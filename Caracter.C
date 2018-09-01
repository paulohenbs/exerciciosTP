#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int num;
    char c;
    printf("Digite um número inteiro \n");
    scanf("%d",&num);
    fflush(stdin);
    printf("Digite um caracter \n");
    scanf("%c",&c);
    printf("O inteiro digitado foi %d \n",num);
    printf("O caracter digitado foi %c",c);
    return 0;
}
