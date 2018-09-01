#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int x,y,z;
    printf("Digite um valor inteiro para X \n");
    scanf("%d",&x);
    printf("Digite um valor inteiro para Y \n");
    scanf("%d",&y);
    printf("Digite um valor inteiro Z \n");
    scanf("%d",&z);
    if ((x==y) && (x==z))
    {
        printf("Triangulo equilatero");
    }
    else

    if ((x!=y) && (x!=z))
    {
        printf("Triangulo isoceles");
    }
    else
    {
        printf("Triangulo escaleno");
    }
    return 0;
}
