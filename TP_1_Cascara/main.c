#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int numero1;
    int numero2;
    int suma;
    int resta;
    int multiplicacion;
    int division;



    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:

                scanf("%d", &numero1);

                break;
            case 2:
                scanf("%d", &numero2);
                break;
            case 3:
                suma=numero1+numero2;
                printf("La suma es: %d \n", suma);
                break;
            case 4:
                resta=numero1-numero2;
                printf("La resta es: %d \n", resta);
                break;
            case 5:
                division=numero1/numero2;
                printf("El resultado de: %d \n", division);
                break;
            case 6:
                multiplicacion=numero1*numero2;
                printf("El resultado es: %d \n", multiplicacion);
                break;
            case 7:
                break;
            case 8:
                suma=numero1+numero2;
                resta=numero1-numero2;
                division=numero1/numero2;
                multiplicacion=numero1*numero2;
                printf("Los resultados en ese orden son: %d, %d, %d, %d \n", suma, resta, division, multiplicacion);
                break;
            case 9:
                seguir = 'n';
                break;
        }

    }
    return 0;
}
