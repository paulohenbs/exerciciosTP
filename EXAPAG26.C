#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int a,b;
    printf("Digite dois números inteiros \n");
    scanf("%d %d",&a,&b);
    if((a>b))
    {
        printf("O maior número é %.d",a);
    }
    else
    {
        printf("O maior número é %.d",b);
    }
    return 0;
}
