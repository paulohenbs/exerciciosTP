#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float main()
{
    setlocale (LC_ALL, "");
    float p1,p2,t1,t2,lista,nota1,nota2,nota3,media;
    printf("Digite a nota da primeira prova \n");
    scanf("%f",&p1);
    printf("Digite a nota da segunda prova \n");
    scanf("%f",&p2);
    printf("Digite a nota do primeiro trabalho \n");
    scanf("%f",&t1);
    printf("Digite a nota do segundo trabalho \n");
    scanf("%f",&t2);
    printf("Digite a nota da lista \n");
    scanf("%f",&lista);
    nota1=((p1+p2)/2)*0.6;
    nota2=((t1+t2)/2)*0.3;
    nota3=lista*0.1;
    media=nota1+nota2+nota3;
    printf("Sua média é %.1f", media);
    return 0;
    }
