#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");
    int trabalho,avaliacao,exame,media;
    printf("Digite a nota do trabalho \n");
    scanf("%d",&trabalho);
    printf("Digite a nota da avaliação \n");
    scanf("%d",&avaliacao);
    printf("Digite a nota do exame \n");
    scanf("%d",&exame);
    media=(trabalho*2+avaliacao*3+exame*5)/10;
    int x = trunc(media);
    switch(media)
    {
    case 0:
        printf("Nota E");
        break;
    case 2:
        printf("Nota E");
        break;
    case 3:
        printf("Nota D");
        break;
    case 4:
        printf("Nota D");
        break;
    case 5:
        printf("Nota C");
    case 6:
        printf("Nota C");
        break;
    case 7:
        printf("Nota B");
        break;
    case 8:
        printf("Nota B");
        break;
    case 9:
        printf("Nota A");
        break;
    case 10:
        printf("Nota A");
        break;
    return 0;
    }
}
