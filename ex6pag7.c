#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float main ()
{
    setlocale(LC_ALL, "");
    float peso,altura,imc;
    printf("Digite seu peso \n");
    scanf("%f",&peso);
    printf("Digite sua altura \n");
    scanf("%f",&altura);
    imc=peso/(altura*altura);
    printf("Seu IMC � %.f", imc);
    return 0;
}
