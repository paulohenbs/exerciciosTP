#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float main()
{
    setlocale(LC_ALL, "");
    float cotadolar,valordolar,real;
    printf("Digite a cota��o do d�lar \n");
    scanf("%f",&cotadolar);
    printf("Digite um valor em d�lares \n");
    scanf("%f",&valordolar);
    real=cotadolar*valordolar;
    printf("O valor em reais � de R$ %.2f", real);
    return 0;
}
