#include <stdlib.h>
#include <stdio.h>

 int main ()
 {
     int num1=0,num2=0,porce;
      printf ("Ingresar la cantidad total de personas ");
    scanf ("%d",&num1);
    printf ("Ingresar la cantidad de mujeres ");
    scanf ("%d",&num2);
    system ("cls");
     printf ("El porcentaje de mujeres es %d",Porcentaje1(num1,num2));
    printf(" y el porcentaje de hombres es %d",100-Porcentaje1(num1,num2));
     return 0;
 }
 int Porcentaje1 (int nume1,int nume2)
 {
     int pf;
    pf=nume2*100/nume1;
     return pf;
 }
