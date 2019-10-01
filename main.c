/******************************************************************************
Realizar un programa en C que determine el area del circulo

*******************************************************************************/
#include <stdio.h>
#define pi 3.1416

void main()
{
    float radio,area=0;
    printf("ingrese el radio");
    scanf("%f",&radio);
    area=pi*radio*radio;
    printf("el area es %f",area);
    
    
}