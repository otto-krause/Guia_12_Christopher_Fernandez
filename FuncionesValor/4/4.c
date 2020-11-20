    #include <stdlib.h>
    #include <stdio.h>

int presionCalculo(int fuer, int super)
{
    int presion;
    presion = fuer/super;
    return presion;
}

void main()
{
    int s, f;
     printf("Ingresar la superficie ");
     scanf("%d", &s);
     printf("Ingresar la fuerza ");
     scanf("%d", &f);
     printf("La presion es %d", 162, presionCalculo(f, s));
}
