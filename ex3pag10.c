#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float main()
{
    setlocale(LC_ALL, "");
    float cotadolar,valordolar,real;
    printf("Digite a cotação do dólar \n");
    scanf("%f",&cotadolar);
    printf("Digite um valor em dólares \n");
    scanf("%f",&valordolar);
    real=cotadolar*valordolar;
    printf("O valor em reais é de R$ %.2f", real);
    return 0;
}
