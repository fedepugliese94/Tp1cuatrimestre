#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float numero1;
    float numero2;
    float suma;
    float resta;
    float multiplicacion;
    float division;
    float x;
    float y;


    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=%.3f)\n", x);
        printf("2- Ingresar 2do operando (B=%.3f)\n", y);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

         while
            (opcion>=3)
        {
            printf("Ingresar operandos antes de comenzar! \n");

            printf("1- Ingresar 1er operando (A=%f)\n", x);
            printf("2- Ingresar 2do operando (B=%f)\n", y);
            printf("3- Calcular la suma (A+B)\n");
            printf("4- Calcular la resta (A-B)\n");
            printf("5- Calcular la division (A/B)\n");
            printf("6- Calcular la multiplicacion (A*B)\n");
            printf("7- Calcular el factorial (A!)\n");
            printf("8- Calcular todas las operacione\n");
            printf("9- Salir\n");

            scanf("%d",&opcion);


        }//while error

        if(x!=0 && y!=0)
                    continue;





        switch(opcion)
        {
            case 1:
                printf("Colocar el primer operador: \n");
                scanf("%f", &numero1);
                x=numero1;
                break;

            case 2:
                printf("Colocar el segundo operador: \n");
                scanf("%f", &numero2);
                y=numero2;
                break;

            case 3:
                suma=numero1+numero2;
                printf("La suma es: %f \n", suma);
                break;

            case 4:
                resta=numero1-numero2;
                printf("La resta es: %f \n", resta);
                break;

            case 5:
                division=numero1/numero2;
                printf("El resultado de: %f \n", division);
                break;

            case 6:
                multiplicacion=numero1*numero2;
                printf("El resultado es: %f \n", multiplicacion);
                break;

            case 7:
                break;

            case 8:
                suma=numero1+numero2;
                resta=numero1-numero2;
                division=numero1/numero2;
                multiplicacion=numero1*numero2;
                printf("Los resultados en ese orden son: %f, %f, %f, %f \n", suma, resta, division, multiplicacion);
                break;

            case 9:
                seguir = 'n';
                break;
        }//switch

    }//while
    return 0;
}
