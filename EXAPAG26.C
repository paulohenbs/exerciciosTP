#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int a,b;
    printf("Digite dois n�meros inteiros \n");
    scanf("%d %d",&a,&b);
    if((a>b))
    {
        printf("O maior n�mero � %.d",a);
    }
    else
    {
        printf("O maior n�mero � %.d",b);
    }
    return 0;
}
