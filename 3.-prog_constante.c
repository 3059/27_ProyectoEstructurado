/*Autor: DIANA KARINA VAZQUEZ AGUILAR                      */
/*E-mail: dian24V@hotmail.com                              */
/*Fecha de creacion: 09/04/2018                            */
/*Fecha de actualizacion: 10/04/2018                       */
/*Descripcion: programa para imprimir las constantes con   */
/*        #define, macro y cont. utlizacion de macros ciclo*/


#include <stdio.h>

/* DECLARACION DE CONSTANTES CON #define*/
/* No se reservan espacios en memoria */
#define PI 3.1416
#define G 9.81
#define TAMANIO 10
#define MIN  0
#define MAX 100

/* Implementacion de macro */
#define SUMA(x, y) x+y
#define RESTA(x, y) x-y
#define MULT(x, y) x*y
#define DIV(x, y) x/y
#define POTCUADRADO(x) x*x
#define POTCUBO(x) x*x*x

/* Definir ciclos con macro */
#define CICLOFOR(x, y) for(x=0; x < y; x++)

/*Declaracion de constantes con cont*/
/* Se reservan espacios en memoria */
const float pi = 3.1416;
const float g = 9.81;
const int tamanio = 10;
const int min = 0;
const int max = 100;

int main(void)
{

  /* Imprimir constantes #define */
  printf("El valor de PI:\n %f \n", PI);
  printf("El valor de G:\n %f \n",G);
  printf("El valor de TAMANIO:\n %d \n",TAMANIO);
  printf("El valor de MIN:\n %d \n",MIN);
  printf("El valor de MAX:\n %d \n",MAX);

  /* Imprimir macros */
  printf("Operacion SUMA: \n %d \n", SUMA(3,4));
  printf("Operacion RESTA:\n %d \n", RESTA(3,4));
  printf("Operacion MULTIPLICACION:\n %d \n", MULT(3,4));
  printf("Operacion DIVICION:\n %d \n", DIV(3,4));
  printf("Operacion POTCUADRADO:\n %d \n", POTCUADRADO(3));
  printf("Operacion POTCUBO:\n %d \n", POTCUBO(3));

  /* Imprimir constantes const */
  printf("El valor de pi:\n %f \n", pi);
  printf("El valor g:\n %f \n",g);
  printf("El valor tamanio:\n %d \n",tamanio);
  printf("El valor min:\n %d \n",min);
  printf("El valor max:\n %d \n",max);



  /* Utilizando las macros de ciclo */
  int x;
  int y = 10;

  CICLOFOR(x, y)
  {
    printf("\n Hola Mundo...\n" );
  }

  /* TAREA PARA EL DIA LUNES 16 EL CICLO WHILE , DO WHILE*/

  return 0;
}
