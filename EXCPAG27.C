#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    char nome [20];
    float a,b,c,mediaAritmetica,mediaPonderada;
    return 0;
    printf("Digite o nome do aluno \n");
    gets(nome);
    printf("Digite a nota da primeira nota \n");
    scanf("%f",&a);
    printf("Digite a nota da segunda nota \n");
    scanf("%f",&b);
    printf("Digite a nota da terceira nota \n");
    scanf("%f",&c);
    mediaAritmetica=(a+b+c)/3;
    mediaPonderada=(a*0.3+b*0.2+c*0.4)/9;
    if(mediaPonderada>MediaAritmetica)
    {
        printf("Sua média aritmetica é %.1",mediaAritmetica);
    }
    else
    {
        printf("Sua média ponderada é %.1f",mediaPonderada)
    }
    return 0;
}
