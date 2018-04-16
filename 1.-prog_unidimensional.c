/*Autor: DIANA KARINA VAZQUEZ AGUILAR                      */
/*E-mail: dian24V@hotmail.com                              */
/*Fecha de creacion: 11/04/2018                            */
/*Fecha de actualizacion: 11/04/2018                       */
/*Descripcion: programa para saber cuantas veces se repite */
/*             un numero entero                            */

#include <stdio.h>

#define MAX 10
int main()
{
int vector[MAX] = {0,1,2,3,4,5,6,7,8,9};
int contador =0;
int i,j;

for(i=0;i<MAX;i++)
{
contador = 0;
for(j=i;j<MAX;j++)
{
if (i==vector[j])
contador++;

}
printf("El numero %d se repite %d  veces\n",i,contador);

}


return 0;
}
