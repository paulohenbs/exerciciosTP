#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");
    int semestreum,semestredois,media,exame;
    printf("Digite a nota do primeiro semestre \n");
    scanf("%d",&semestreum);
    printf("Digite a nota do segundo semestre \n");
    scanf("%d",&semestredois);
    media=(semestreum*2+semestredois)/3;
    int x = trunc(media);
    switch(media)
    {
    case 0:
        printf("Reprovado");
        break;
    case 1:
        printf("Reprovado");
        break;
    case 2:
        printf("Reprovado");
        break;
    case 3:
        printf("Exame \n");
        exame=12-media;
        printf("Para passar de ano precisa tirar %.d",exame);
        break;
    case 4:
        printf("Exame \n");
        exame=12-media;
        printf("Para passar de ano precisa tirar %.d",exame);
        break;
    case 5:
        printf("Exame \n");
        exame=12-media;
        printf("Para passar de ano precisa tirar %.d",exame);
        break;
    case 6:
        printf("Aprovado");
        break;
    case 7:
        printf("Aprovado");
        break;
    case 8:
        printf("Aprovado");
        break;
    case 9:
        printf("Aprovado");
        break;
    case 10:
        printf("Aprovado");
        break;
    return 0;
    }
}
