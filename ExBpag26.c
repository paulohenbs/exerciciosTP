#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int num;
    printf("Digite um número \n");
    scanf("%d",&num);
    if((num%2==0))
    {
        printf("O número digitado é par");
    }
    else
    {
        printf("O número digitado é impar");
    }
    return 0;
}
