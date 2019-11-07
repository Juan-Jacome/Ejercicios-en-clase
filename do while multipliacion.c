/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int cont=1,tabla,lim,mult=0;
    printf("Ingrese la tabla:");
    scanf("%d",&tabla);
    printf("Ingrese el limite:");
    scanf("%d",&lim);
    do
    {
        mult=tabla*cont;
        printf("%dX%d=%d\n", tabla,cont,mult);
        cont++;
    }while(cont<=lim);
}

