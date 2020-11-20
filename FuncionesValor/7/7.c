    #include <stdlib.h>
    #include <stdio.h>
    int NumMayor(int a, int b);

    void main()
    {
        int num1, num2;
        printf("Ingresar dos numeros\n");
        scanf("%d %d", &num1, &num2);

        if(num1 == num2)
        {
            printf("Los numeros son iguales");
        }
        else
        {
           printf("El numero mayor es %d", NumMayor(num1, num2));
        }
    }

    int NumMayor(int a, int b)
    {
        int nMayor;
        if (a > b)
        {
            nMayor = a;
        }
        else
        {
            nMayor = b;
        }
        return nMayor;
    }

