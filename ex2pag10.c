#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float main()
{
    setlocale(LC_ALL, "");
    float minima,maxima,medio;
    printf("Digite a quantidade m�nima de pe�as \n");
    scanf("%f",&minima);
    printf("Digite a quantidade m�xima de pe�as \n");
    scanf("%f",&maxima);
    medio=(minima+maxima)/2;
    printf("O estoque m�dio depe�as � de %.f ",medio);
    return 0;
}
