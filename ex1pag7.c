#include <stdio.h>
#include <stdlib.h>

float main()
{
    float x,y,dobro,triplo;
    printf("Digite o valor do primeiro número inteiro \n ");
    scanf("%f",&x);
    dobro = x*2;
    printf("O dobro do primeiro número é %.1f \n",dobro);
    printf("Digite o valor do segundo número inteiro \n");
    scanf("%f",&y);
    triplo = y*3;
    printf("O triplo do segundo número é %.1f \n",triplo);
    return 0;
}
