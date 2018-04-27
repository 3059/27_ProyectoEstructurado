/*Autor: DIANA KARINA VAZQUEZ AGUILAR                      */
/*E-mail: dian24V@hotmail.com                              */
/*Fecha de creacion: 24/04/2018                            */
/*Fecha de actualizacion: 27/04/2018                       */
/*Descripcion:programa para generar valores aleatorios de  */
/*            tipo flotante entre 0 a 1000                 */



#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*Definicion de constantes*/
#define ROW 3 /*Numero de filas de la matriz*/
#define COL 3 /*Numero de columnas de la matriz*/
#define MAX 1000 /*rango superior de los datos aleatorios*/

int main (void)
{
  int array[ROW][COL];
  srand((unsigned)time(NULL));

/*Inicializar el array con valores enteros aleatorios 1-100*/
for(int i=0; i<ROW;i++) /*ciclo que controla las filas del array*/
{
  printf("{");
/*asignacion de datos a array*/
    for(int j=0; j<COL;j++) /*ciclo que controla las columnas del array*/
    {
      printf("%d", array[i][j]);
      /*asignacion de datos al array*/
      /*utilizar la funcion scanf() para solicitar datos al usuario*/

      /*utilizar la funcion rand[] para obtener datos de forma aleatoria*/
      /*La funcion se encuentra definida dentro de la biblioteca stdio.h*/
      array[i][j]=rand()%(MAX+1);
      /*Tarea: el dia viernes 27 de abril*/
      /*generar valores aleatorios de tipo flotante entre 0-1000*/
    }
}
printf("\x1b[32m Datos aleatorios de la matriz: array[%d][%d]\n",ROW,COL );
printf("\x1b[42m Otro mensaje\n]");
printf("\x1b[0m Otro mensaje\n");

printf("\n");
    for (int i=0 ; i<ROW; i++)
      {
        printf("{");
        for(int j=0 ; j<COL ; j++)
        {
          printf("%d ", array[i][j]);
        }
        printf("}\n");
      }

return 0;
}
