#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int num;
    printf("Digite um n�mero \n");
    scanf("%d",&num);
    if((num%2==0))
    {
        printf("O n�mero digitado � par");
    }
    else
    {
        printf("O n�mero digitado � impar");
    }
    return 0;
}
