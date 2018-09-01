#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float main ()
{
    setlocale(LC_ALL, "");
    float codigo,valor,quantidade,vt;
    printf("Digite o código da peça \n");
    scanf("%f",&codigo);
    printf("Digite o valor da peça \n");
    scanf("%f",&valor);
    printf("Digite a quantidade de peças \n");
    scanf("%f",&quantidade);
    vt=quantidade*valor;
    printf("O código da peça é %.f \n", codigo);
    printf("O valor total da peça é de R$ %.2f", vt);
    return 0;
}
