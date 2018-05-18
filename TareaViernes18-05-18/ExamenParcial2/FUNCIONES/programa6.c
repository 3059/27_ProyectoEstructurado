/*Autor: DIANA KARINA VAZQUEZ AGUILAR                      */
/*E-mail: dian24V@hotmail.com                              */
/*Fecha de creacion: 17/05/2018                            */
/*Fecha de actualizacion: 17/05/2018                       */
/*Descripcion:Escriba un programa que permita crear un     */
/*arreglo bidimensional de tipo int, de tamaño [5][5]      */

#include <stdio.h>

int main (void)

{
int matriz[5][5] = { {1,1,1,1,1},{2,2,2,2,2},{3,3,3,3,3},{4,4,4,4,4},{5,5,5,5,5}};
int suma=0;
for (int i = 0; i < 5 ; i++)
{
  for (int j = 0; j < 5; j++)

  {

    printf(" %d ", matriz[i][j] );
  }
  printf("\n");
  }
for (int i = 0; i < 5 ; i++)
{
  for (int j = 0; j < 5; j++)

  {

   if (i==j)
	{
		suma=suma+matriz[i][j];
	}
  }

  }
	printf(" la suma es: %d ", suma);
  return 0;
}
