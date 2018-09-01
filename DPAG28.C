#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int valorGasto,troco,qntNota10=0,qntNota5=0,qntNota1=0,resto;
    printf("Digite o valor gasto \n");
    scanf("%d",&valorGasto);
    troco=50-valorGasto;
    printf("O troco é: %d \n",troco);
    if (troco>=10)
    {
        resto=troco%10;
        qntNota10=(troco-resto)/10;
        troco=troco-qntNota10*10;
    }
    if(troco>=5)
    {
        resto=troco%5;
        qntNota5=(troco-resto)/5;
        troco=troco-qntNota5*5;
    }
    if(troco>=1)
    {
        qntNota1=troco;
    }
    printf("Notas de R$10,00: %d \n",qntNota10);
    printf("Notas de R$5,00: %d \n",qntNota5);
    printf("Notas de R$1,00: %d \n",qntNota1);
    return 0;
}
