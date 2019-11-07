/******************************************************************************

Realizar un programa que contemga un menu con las siguientes opciones

*******************************************************************************/
#include <stdio.h>
#include <math.h>

void main()
{
    int opcion,dia_n,mes_n,anio_n,dia_a,mes_a,anio_a,edad_dia=0,edad_mes=0,edad_anio=0;
    float a,b,c,x1=0,x2=0,base,alt,area=0;
    printf("Menu principal\n1.Ecuacion Cuadratica\n2.Area del Triangulo\n");
    printf("Escoja la opcion:");
    scanf("%d",&opcion);
    switch(opcion)
    {
        case 1:
            printf("Ingrese el coeficiente a:");
            scanf("%f",&a);
            printf("Ingrese el coeficiente b:");
            scanf("%f",&b);
            printf("Ingrese el coeficiente c:");
            scanf("%f",&c);
            x1=(-b+(sqrt(pow(b,2)-4*a*c)))/(2*a);
            x2=(-b-(sqrt(pow(b,2)-4*a*c)))/(2*a);
            printf("El resultado de x1 es %.2f\n",x1);
            printf("El resultado de x2 es %.2f",x2);
        break;
        case 2:
            printf("Ingrese la base:");
            scanf("%f",&base);
            printf("Ingrese la altura");
            scanf("%f",&alt);
            area=(base*alt)/2;
            printf("El area del triangulo es:%.2f\n",area);
        break;
        case 3:
            printf("Ingrese dia de nacimiento:");
            scanf("%d",&dia_n);
            printf("Ingrese mes de nacimiento:");
            scanf("%d",&mes_n);
            printf("Ingrese anio de nacimiento:");
            scanf("%d",&anio_n);
            printf("Ingrese dia actual:");
            scanf("%d",&dia_a);
            printf("Ingrese mes actual:");
            scanf("%d",&mes_a);
            printf("Ingrese anio actual:");
            scanf("%d",&anio_a);
            edad_dia=30-(fabs(dia_a-dia_n));
            edad_mes=(mes_a-mes_n);
            edad_anio=(anio_a-anio_n);
            printf("Su edad en anios es:%.d\n",edad_anio);
            printf("Su edad en meses es:%.d\n", edad_mes);
            printf("Su edad en dias es:%.d\n",edad_dia);
        break;
            
            
        default:
            printf("opcion invalida");
    }


}


