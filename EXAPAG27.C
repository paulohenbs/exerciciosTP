#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int idade;
    char sexo;
    printf("Digite sua idade \n");
    scanf("%d",&idade);
    if (idade>=18)
    {
        printf("Maior de idade \n");
        printf("Ja pode dirigir \n");
        printf("Digite seu sexo [M/F] \n");
        scanf("%s",&sexo);
        if (sexo=='M')
        {
        printf("Serviço militar obrigatório");
        }
        else
        {
        printf("Alistamento não obrigatorio para mulheres");
        }
    }
    else
    {
     printf("Menor de idade \n");
    }
        return 0;
}
