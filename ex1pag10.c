#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float main ()
{
    setlocale(LC_ALL, "");
    float codigo,valor,quantidade,vt;
    printf("Digite o c�digo da pe�a \n");
    scanf("%f",&codigo);
    printf("Digite o valor da pe�a \n");
    scanf("%f",&valor);
    printf("Digite a quantidade de pe�as \n");
    scanf("%f",&quantidade);
    vt=quantidade*valor;
    printf("O c�digo da pe�a � %.f \n", codigo);
    printf("O valor total da pe�a � de R$ %.2f", vt);
    return 0;
}
