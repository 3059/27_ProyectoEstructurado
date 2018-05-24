/*----------------------------------------------------------------*/
/*Autor: DIANA KARINA VAZQUEZ AGUILAR                             */
/*E-mail: dian24V@hotmail.com                                     */
/*Fecha de creacion: 22/05/2018                                   */
/*Fecha de actualizacion: 23/05/2018                              */
/* Descripcion: suma de una matriz.                               */
/*----------------------------------------------------------------*/


#include <stdio.h>
#include <stdbool.h>/*valores boleanos*/

#define ROW 10
#define COL 10

bool validarSumaMatriz(int filaA, int colA, int filaB, int colB);
void leerDatosMatriz(int matriz[ROW][COL], int fila, int col);
void imprimirMatriz(int matriz[ROW][COL], int fila, int col);

void sumarMatriz(int matrizA[ROW][COL],int matrizB[ROW][COL],int matrizResultado[ROW][COL],int fila,int col);

int main(void)
{
  int filaA,colA;
  int filaB,colB;

  int matrizA[ROW][COL];
  int matrizB[ROW][COL];
  int matrizResultado[ROW][COL];

  printf("\nIntroduce la fila de la matriz A: ");
  scanf("%d",&filaA);

  printf("\nIntroduce la fila de la matriz A: ");
  scanf("%d",&colA);

  printf("\nIntroduce la fila de la matriz B: ");
  scanf("%d",&filaB);

  printf("\nIntroduce la fila de la matriz B: ");
  scanf("%d",&colB);

if(validarSumaMatriz(filaA,colA,filaB,colB) == true)
{
  leerDatosMatriz(matrizA,filaA,colA);
  leerDatosMatriz(matrizB,filaB,colB);

  imprimirMatriz(matrizA,filaA,colA);
  imprimirMatriz(matrizB,filaB,colB);

  sumarMatriz(matrizA,matrizB,matrizResultado,filaA,colA);

  printf("\nEl resultado de la suma es:\n");
  imprimirMatriz(matrizResultado,filaA,colB);

}else{

    printf("\nNO SE PUEDE REALIZAR LA SUMA DE MATRICES\n");
}

  return 0;
}

void sumarMatriz(int matrizA[ROW][COL],int matrizB[ROW][COL],int matrizResultado[ROW][COL],int fila,int col)

{
  for(int i = 0; i< fila; i++)
  {
    for(int j =0; j< col; j++)
    {
      matrizResultado[i][j]=matrizA[i][j]+matrizB[i][j];
    }
}
}
void leerDatosMatriz(int matriz[ROW][COL], int fila, int col)


{
  for(int i = 0; i< fila; i++)
  {
    for(int j =0; j< col; j++)
    {
      printf("\nIntroduce el elemento [%d][%d]",i,j);
      scanf("%d",&matriz[i][j]);
    }

  }

}

void imprimirMatriz(int matriz[ROW][COL], int fila, int col)
{
  printf("\n\n");
  for(int i = 0; i< fila; i++)
{
  printf("|");
  for(int j =0; j< col; j++)
  {
    printf("%d",matriz[i][j]);
  }
  printf("|\n");
}
}


bool validarSumaMatriz(int filaA, int colA, int filaB, int colB)
{
  if( (filaA==filaB) && (colA==colB) )
  {
    return true;
  }
  return false;
}
