#include <stdlib.h>
#include <stdio.h>

 int main ()
 {
     int n1,n2;
          printf ("Ingrese un numero\n");
     n1=NumerosEnPantalla();
      printf ("Ingrese otro numero\n");
     n2=NumerosEnPantalla2();
     system ("cls");

     printf ("Los numeros ingresados son \n%d  \n%d",n1,n2);
     return 0;
 }
 int NumerosEnPantalla()
 {
int num1=0;

     scanf("%d",&num1);
     return num1;

 }
 int NumerosEnPantalla2()
 {
int num2=0;

     scanf("%d",&num2);
     return num2;

 }
