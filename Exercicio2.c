#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float main ()
{
    setlocale(LC_ALL, "");
    float ano,dia,preco,gasto;
    printf("Digite o n�mero de anos que voc� fuma \n");
    scanf("%f",&ano);
    printf("Digite o n�mero de cigarros fumados por dia \n");
    scanf("%f",&dia);
    printf("Digite o pre�o da carteira \n");
    scanf("%f",&preco);
    gasto=(ano*360)*dia*(preco/20);
    printf("A quantidade gasta em cigarros � de R$ %.2f",gasto);
    return 0;
}
