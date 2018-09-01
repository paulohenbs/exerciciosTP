#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float main()
{
    setlocale(LC_ALL, "");
    float minima,maxima,medio;
    printf("Digite a quantidade mínima de peças \n");
    scanf("%f",&minima);
    printf("Digite a quantidade máxima de peças \n");
    scanf("%f",&maxima);
    medio=(minima+maxima)/2;
    printf("O estoque médio depeças é de %.f ",medio);
    return 0;
}
