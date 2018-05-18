/*Autor: DIANA KARINA VAZQUEZ AGUILAR                      */
/*E-mail: dian24V@hotmail.com                              */
/*Fecha de creacion: 17/05/2018                            */
/*Fecha de actualizacion: 17/05/2018                       */
/*Descripcion: programa para encontrar el numero mayor     */
/*             dentro de un arreglo                        */


#include <stdio.h>
int main(void)

{
int arreglo[9]= {1,2,3,4,5,6,7,8,9};
int i,menor=arreglo[0];
for( i=1; i<9; i++ )
{
  if(menor<arreglo[i])
     menor=arreglo[i];

 }
  printf("el numero mayor es: %d\n",menor);
     return 0;

}
