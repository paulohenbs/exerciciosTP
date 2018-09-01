#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int a,b,c;
    printf("Digite um valor para A \n");
    scanf("%d",&a);
    printf("Digite um valor para B \n");
    scanf("%d",&b);
    printf("Digite um valor para C \n");
    scanf("%d",&c);
    if ((a>b) && (b>c))
    {
        printf("Em ordem crescente fica %d %d %d",a,b,c);
    }
    else

    if ((a>b) && (b<c))
    {
        printf("Em ordem crescente fica %d %d %d",a,c,b);
    }
    else

    if ((b<c) && (a<b))
    {
        printf("Em ordem crescente fica %d %d %d",c,b,a);
    }
    else

    if ((c>a) && (a>b))
    {
        printf("Em ordem crescente fica %d %d %d",c,a,b);
    }
    else

    if ((b>a) && (a>c))
    {
        printf("Em ordem crescente fica %d %d %d",b,c,a);
    }
    else
    {
        printf("Em ordem crescente fica %d %d %d",b,a,c);
    }
    return 0;
}
