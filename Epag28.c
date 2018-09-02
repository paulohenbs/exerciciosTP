#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()

{
    setlocale(LC_ALL, "");
    int dia1,mes1,ano1,dia2,mes2,ano2;
    printf("Digite o dia da primeira data \n");
    scanf("%d",&dia1);
    printf("Digite o mes da primeira data \n");
    scanf("%d",&mes1);
    printf("Digite o ano da primeira data \n");
    scanf("%d",&ano1);
    printf("Digite o dia da segunda data \n");
    scanf("%d",&dia2);
    printf("Digite o mes da segunda data \n");
    scanf("%d",&mes2);
    printf("Digite o ano da segunda data \n");
    scanf("%d",&ano2);
    if((ano1>ano2))
    {
        printf("Data um é maior");
    }
    else
    {
        printf("Data dois é maior");
    }
    return 0;

}
