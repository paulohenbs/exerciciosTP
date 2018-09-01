#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    char nome[30];
    float n1,n2,n3,media;
    printf("Digite o nome do aluno \n");
    gets(nome);
    printf("Digite a nota do exame intermediário \n");
    scanf("%f",&n1);
    printf("Digite a nota do laboratório \n");
    scanf("%f",&n2);
    printf("Digite a nota do exame final \n");
    scanf("%f",&n3);
    media=n1*0.3+n2*0.2+n3*0.5;
    if(media>=6)
    {
        printf("Seu nome é %s \n",nome);
        printf("Sua nota do exame intermediário é %.1f \n",n1);
        printf("Sua nota do laboratório é %.1f \n",n2);
        printf("Sua nota do exame final é %.1f \n",n3);
        printf("Sua média final foi de %.1f \n",media);
        printf("Aprovado");
    }
    else
    {
        printf("Seu nome é %s \n",nome);
        printf("Sua nota do exame intermediário é %.1f \n",n1);
        printf("Sua nota do laboratório é %.1f \n",n2);
        printf("Sua nota do exame final é %.1f \n",n3);
        printf("Sua média final foi de %.1f \n",media);
        printf("Reprovado");
    }
    return 0;
}
