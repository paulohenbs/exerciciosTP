#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int a,b,result;
    printf("Digite um valor inteiro para A \n");
    scanf("%d",&a);
    printf("Digite um valor inteiro para B \n");
    scanf("%d",&b);
    result=a/b;
    if ((a%b)!=0)
    {
        printf("O valor A n�o � divisivel por B \n");
        printf("O resultado da divis�o � %d ",result);
    }
    else
    {
        printf("O resultado da divis�o � %d ",result);
    }
    return 0;
}
