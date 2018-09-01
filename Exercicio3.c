#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float main ()
{
    setlocale(LC_ALL, "");
    float custo,dist,imposto,total;
    printf("Digite o custo de fábrica do carro \n");
    scanf("%f",&custo);
    imposto=(45*custo)/100;
    dist=(12*custo)/100;
    total=custo+imposto+dist;
    printf("O valor do seu carro é R$ %.2f",total);
    return 0;
}
