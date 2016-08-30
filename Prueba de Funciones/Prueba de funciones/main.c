#include <stdio.h>
#include <stdlib.h>

#include "myFunction.h"


int main()
{
    int a;
    int total;
    scanf("%d", &a);
    total=myFunction(a);
    printf("El resultado es: %d\n", total);
    return 0;
}


