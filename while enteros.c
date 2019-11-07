/******************************************************************************

Realizar un programa que permite generar n numero enteros.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int cont=1,nnum,numeros,suma=0;
    printf("Cuantos numeros va ingresar");
    scanf("%d",&nnum);
    while(cont<=nnum)
    {
        printf("Ingrese un numero");
        scanf("%d",&numeros);
        suma=suma+numeros;
        cont++;
    }
    printf("La suma de %d numeros es %d\n",nnum,suma);
}

