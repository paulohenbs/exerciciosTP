#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float main ()
{
    setlocale(LC_ALL, "");
    float ano,dia,preco,gasto;
    printf("Digite o número de anos que você fuma \n");
    scanf("%f",&ano);
    printf("Digite o número de cigarros fumados por dia \n");
    scanf("%f",&dia);
    printf("Digite o preço da carteira \n");
    scanf("%f",&preco);
    gasto=(ano*360)*dia*(preco/20);
    printf("A quantidade gasta em cigarros é de R$ %.2f",gasto);
    return 0;
}
