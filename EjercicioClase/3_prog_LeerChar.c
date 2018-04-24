/*Autor: DIANA KARINA VAZQUEZ AGUILAR                      */
/*E-mail: dian24V@hotmail.com                              */
/*Fecha de creacion: 19/04/2018                            */
/*Fecha de actualizacion: 19/04/2018                       */
/*Descripcion:programa para convertir letras minusculas a  */
/*            mayusculas                                   */

#include <stdio.h>

const int tamanio = 5; /*definir una constante*/



int main(void)

{
  char c;
  char array[tamanio];

  int index = 0;
  while((c = getchar()) !='\n') /*Leer caracter a caracter*/

  {
    if(c >= 97 && c <= 122) /*validando unicamente caracter: letras minusculas*/
    {
    c = c-32;
    array[index] = c;
    index++;
    }

  }
  printf("\n");
  for(int i=0; i<tamanio; i++)
{
  printf("%c",array[i]);
}


  printf("\n");



  return 0;
}
