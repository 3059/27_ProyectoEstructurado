/*Autor: DIANA KARINA VAZQUEZ AGUILAR                      */
/*E-mail: dian24V@hotmail.com                              */
/*Fecha de creacion: 17/05/2018                            */
/*Fecha de actualizacion: 17/05/2018                       */
/*Descripcion: programa para convertir minusculas a mayusculas*/
#include <stdio.h>

const int tamanio = 5;


int main(void)

{
  printf("Digite una letra que quiera convertir a mayuscula\n");
  char c;
  char array[tamanio] , array2[tamanio];


  int index = 0;
  while((c = getchar()) !='\n')
  {
    if(c >= 97 && c <= 122)
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
  index = 0;

while((c = getchar()) !='\n')

  {
    if(c >= 65 && c <= 90)
    {
    c = c+32;
    array2[index] = c;
    index++;
    }

  }
  return 0;
}
