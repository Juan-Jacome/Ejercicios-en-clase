/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char nombre[10],desP1[10],desP2[10];
    int cedula;
    float cantP1,cantP2,precioP1,precioP2,subtota=0,iva,total=0,pVtaP1,pVtaP2, subtotal;
    printf("Ingrese el nombre del cliente");
    scanf("%s",&nombre);
    printf("Ingrese la cedula");
    scanf("%d",&cedula);
    printf("Datos del producto1\n");
    printf("Ingrese la descripcion:");
    scanf("%s",&desP1);
    printf("Ingrese la catidad");
    scanf("%f",&cantP1);
    printf("Ingrese el precio");
    scanf("%f",&precioP1);
    printf("Datos del producto2\n");
    printf("Ingrese la descripcion:");
    scanf("%s",&desP2);
    printf("Ingrese la catidad");
    scanf("%f",&cantP2);
    printf("Ingrese el precio");
    scanf("%f",&precioP2);
    pVtaP1=cantP1*precioP1;
    pVtaP2=cantP2*precioP2;
    subtotal=pVtaP1+pVtaP2;
    iva=subtotal*0.12;
    total=subtotal+iva;
    printf("******Empresa XYZ******\n");
    printf("Cliente: %s\n",nombre);
    printf("cedula: %d\n",cedula);
    printf("descripcion\tcantidad\tprecio\tpVta\n");
    printf("%s\t\t%.2f\t\t%.2f\t%.2f\n", desP1, cantP1, precioP1, pVtaP1);
    printf("%s\t%.2f\t\t%.2f\t\t%.2f\n\n\n", desP2, cantP2, precioP2, pVtaP2);
    printf("\t\t\t\tsubtotal:%.2f\n", subtotal);
    printf("\t\t\t\tiva:%.2f\n",iva);
    printf("\t\t\t\ttotal:%.2f\n",total);
    

}
