  #include <stdlib.h>
  #include <stdio.h>

  float porcentajeHom();
  float porcentajeMuj();
  int hom, muj, total;

  float porcentajeHom(int cantH, int t)
  {
      int porcenHom;
      porcenHom = cantH*100/(t);
      return porcenHom;
  }
  float porcentajeMuj(int cantM, int t)
  {
      int porcenMuj;
      porcenMuj = cantM*100/(t);
      return porcenMuj;
  }

  int main()
  {
      printf("Ingresar la cantidad de hombres que enviaron el curriculum\n");
      scanf("%d", &hom);
      printf("Ingresar la cantidad de mujeres que enviaron el curriculum\n");
      scanf("%d", &muj);
      total = hom + muj;

      printf("El porcentaje de mujeres que enviaron el curriculum es de %.2f\n", porcentajeMuj(muj, total));
      printf("El porcentaje de hombres que enviaron el curriculum es de %.2f", porcentajeHom(hom, total));
      return 0;
  }
