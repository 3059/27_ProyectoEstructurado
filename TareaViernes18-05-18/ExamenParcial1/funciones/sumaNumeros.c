/*Autor: DIANA KARINA VAZQUEZ AGUILAR                      */
/*E-mail: dian24V@hotmail.com                              */
/*Fecha de creacion: 17/05/2018                            */
/*Fecha de actualizacion: 17/05/2018                       */
/*Descripcion:Realice un programa que imprima la suma de   */
/*los 100 primeros números, utilice una estructura cíclica */

#include <stdio.h>
int main(void)
{
  int suma = 0;
  printf("Suma de los primeros 100 numero\n" );
  for (int i = 1; i <= 100; i++)
  {
    suma += i;
  }
  printf("%d\n", suma );
  return 0;
}
