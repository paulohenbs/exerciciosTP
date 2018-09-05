#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    char sexo;
    printf("Digite o sexo [M/F] \n");
    scanf("%c",&sexo);
    switch(sexo)
    {
    case 'M':
        printf("Masculino");
        break;
    case 'F':
        printf("Feminino");
        break;
    case 'm':
        printf("Masculino");
        break;
    case 'f':
        printf("Feminino");
        break;
    default:
        printf("Opção inválida \n");
        printf("Digite a letra M ou F");
    }
    return 0;
}
