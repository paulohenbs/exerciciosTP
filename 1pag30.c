#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");
    int diaSemana;
    printf("Digite um número [1/7] \n");
    scanf("%d",&diaSemana);
    switch(diaSemana)
    {
    case 1:
        printf("Domingo \n");
        printf("Dia de churrasco");
        break;
    case 2:
        printf("Segunda-feira \n");
        printf("Pior dia");
        break;
    case 3:
        printf("Terça-feira \n");
        printf("Pior dia");
        break;
    case 4:
        printf("Quarta-feira \n");
        printf("Calma...Ja esta chegando o fim de semana");
        break;
    case 5:
        printf("Quinta-feira \n");
        printf("Só mais um pouquinho");
        break;
    case 6:
        printf("Sexta-feira \n");
        printf("Sextou");
        break;
    case 7:
        printf("Sábado \n");
        printf("Dia de ir pro barzinho cas amiga");
        break;
     default:
        printf("Opção inválida");
    }

    return 0;
}
