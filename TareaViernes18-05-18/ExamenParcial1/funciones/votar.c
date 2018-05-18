/*Autor: DIANA KARINA VAZQUEZ AGUILAR                       */
/*E-mail: dian24V@hotmail.com                               */
/*Fecha de creacion: 17/05/2018                             */
/*Fecha de actualizacion: 17/05/2018                        */
/*Descripcion:Elabore un programa para determinar si una    */
/*persona puede votar con base en su edad en las próximas   */
/*elecciones. Los datos deberán introducirse por el teclado.*/

#include <stdio.h>

int mayorvotar(int edad);


int main(void)
{
  int edad=19;

  int votar = mayorvotar(edad);

  printf("usted puede votar\n");


  return 0;
}

  int mayorvotar(int edad)

{
  return (edad>=18);

}
