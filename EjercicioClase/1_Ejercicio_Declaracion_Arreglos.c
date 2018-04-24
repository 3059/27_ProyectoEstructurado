/*Autor: DIANA KARINA VAZQUEZ AGUILAR                      */
/*E-mail: dian24V@hotmail.com                              */
/*Fecha de creacion: 11/04/2018                            */
/*Fecha de actualizacion: 11/04/2018                       */
/*Descripcion: programa que declara arreglos de tipo int   */
/*	       y char.					   */


#include <stdio.h>

#define TAM 5

int main(void)
{
  const int array[TAM];
  int array1[TAM]={1,2,3,4,5};
  int array2[TAM]={1,2,[0]=10,3,4,[1]=0};
  int array3[TAM]={1,2,3,4,5,6};


  /*arreglos de caracteres*/
  char char1[]={'a','b','c'};
  char char2[]={62,63,64,65,66};
  char char3[]={0x63, 0x64, 0x65, 0x66};
  printf("%c\n",char3[0]);
  return 0;
}
