#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float main ()
{
    setlocale(LC_ALL, "");
    float codigo,qntd,totalvenda,salario;
    printf("Digite o código do funcionário \n");
    scanf("%f",&codigo);
    printf("Digite a quantidade de carros vendidos \n");
    scanf("%f",&qntd);
    printf("Digite o valor total das vendas \n");
    scanf("%f",&totalvenda);
    salario=700+(qntd*500)+(totalvenda*0.01);
    printf("O salario do vendedor durante este mes é de R$ %.2f",salario);
    return 0;

}
