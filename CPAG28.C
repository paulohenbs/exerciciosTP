#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main ()
{
   int a, b, c ,d,x1,x2;
   printf ("Digite 3 numeros inteiros: ");
   scanf("%d %d %d", &a, &b, &c);
   d = (b*b ) - (4*a*c);
   if (d<0)
   {
    printf("Não existem raizes");
}
    else
{
    x1 = (-b + sqrt(d)) / 2*a;
    x2 = (-b - sqrt(d)) / 2*a;
  printf ("1° raiz: %d\n",x1);
  printf ("2ª raiz:%d\n",x2);
}
  return 0;
}
