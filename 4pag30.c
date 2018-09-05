#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int num;
    printf("Digite um número [1/3] \n");
    scanf("%d",&num);
    switch(num)
    {
    case 1:
        printf("A,B e C");
        break;
    case 2:
        printf("C,B e A");
        break;
    case 3:
        printf("A,C e B");
        break;
    }
    return 0;
}
