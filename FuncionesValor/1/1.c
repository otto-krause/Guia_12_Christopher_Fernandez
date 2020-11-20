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
      a = num1();
      b = num2();
      system("cls");
      printf("Ingreso los numeros:\n");
      printf("%d\n", a);
      printf("%d", b);
      return 0;
  }


