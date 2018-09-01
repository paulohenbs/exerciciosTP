#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    char nome[20];
    float salarioHora,horaExtra,salario;
    int horasDia;
    horaExtra=0;
    printf("Digite seu nome \n");
    gets(nome);
    printf("Digite as horas trabalhadas \n");
    scanf("%d",&horasDia);
    printf("Digite seu salário por hora \n");
    scanf("%f",&salarioHora);
    if (horasDia>8)
    {
       horaExtra=(horasdia-8)*(salarioHora);
       salario=(8*salarioHora)+horaExtra;

    }
    else
    {
       salario=salarioHora+horaExtra;
    }

    printf("Total a pagar para %s",nome,salario);

    return 0;
}
