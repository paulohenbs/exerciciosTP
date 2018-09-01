#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float main()
{
    setlocale(LC_ALL, "");
    float preco,avista,parcela,juros,pagar;
    printf("Digite o preço do produto \n");
    scanf("%f",&preco);
    avista=preco*0.9;
    parcela=preco/5;
    juros=(preco*1.20)/10;
    printf("O valor a ser pago com pagamento a vista é de R$ %.2f \n",avista);
    printf("O valor a ser pago com parcelamento sem juros em 5x é de R$ %.2f \n",parcela);
    printf("O valor a ser pago com parcelamento em 10x com juros de 20 porcento é de R$ %.2f \n",juros);
    return 0;

}
