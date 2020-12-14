#include <stdlib.h>
#include <stdio.h>

 int main ()
 {
     int num1=0, num2=0, peri,area;
  printf ("Ingrese un lado del rectangulo\n");
     scanf("%d",&num1);
      printf ("Ingrese el otro lado del rectangulo\n");
     scanf("%d",&num2);


      printf("El perimetro es %d", calculo_Perimetro(num1,num2));
     printf(" el area es %d",calculo_Area(num1,num2));
     return 0;
 }
 int calculo_Perimetro (int nume1,int nume2)
 {
 int p;


     p=2*nume1+2*nume2;
     return p;
 }
int calculo_Area (int num,int num1)
    {
int are;

     are=num*num1;
     return are;
     }
