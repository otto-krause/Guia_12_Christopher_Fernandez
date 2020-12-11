  #include <stdlib.h>
  #include <stdio.h>

  int num1();
  int num2();

  int num1()
  {
      int a;
      printf("Ingresar un numero\n");
      scanf("%d", &a);

      return a;
  }
  int num2()
  {
      int b;
      printf("Ingresar otro numero\n");
      scanf("%d", &b);
      return b;
  }

  int main()
  {
      int a, b;
      //a = num1();
      //b = num2();
      system("cls");
      printf("Ingreso los numeros:\n");
      printf("%d\n", num1());//Se úede utilizar la llamada en el print si no se necesita para calcular.
      printf("%d", num2());
      return 0;
  }


