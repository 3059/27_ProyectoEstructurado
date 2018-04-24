/*Autor: DIANA KARINA VAZQUEZ AGUILAR                      */
/*E-mail: dian24V@hotmail.com                              */
/*Fecha de creacion: 19/04/2018                            */
/*Fecha de actualizacion: 24/04/2018                       */
/*Descripcion:programa para crear una matriz columna       */
/*            cuadrada y rectangular                       */

#include <stdio.h>

int main (void)
{

int matriz1[5][1] = { {1},{1},{1},{1},{1}};
for (int i = 0; i < 5 ; i++)
{
  for (int j = 0; j < 1; j++)
  {
    printf(" %d ", matriz1[i][j] );
  }
  printf("\n");
  }

printf("\n");

  int matriz2[3][3] = { {1,1,1},{1,1,1},{1,1,1}};
  for (int i = 0; i < 3 ; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf(" %d ", matriz2[i][j] );
    }
    printf("\n");
    }

printf("\n");



    int matriz3[3][5] = { {1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1}};
for (int i = 0; i < 3 ; i++)
{
  for (int j = 0; j < 5; j++)
  {
    printf(" %d ", matriz3[i][j] );
  }
  printf("\n");
  }




  return 0;
}
