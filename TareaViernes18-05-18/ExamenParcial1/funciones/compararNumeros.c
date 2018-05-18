/*Autor: DIANA KARINA VAZQUEZ AGUILAR                      */
/*E-mail: dian24V@hotmail.com                              */
/*Fecha de creacion: 17/05/2018                            */
/*Fecha de actualizacion: 17/05/2018                       */
/*Descripcion:Realice un programa que solicite tres números*/
/*por teclado y determine cuál de las tres cantidades      */
/*proporcionadas es la mayor, menor o mostrar en pantalla  */
/*que los números son iguales                              */

#include <stdio.h>

int cantidadesproporcionadas(float x1, float x2, float x3);


int main(void)
{
  float x1=34;
  float x2=25;
  float x3=43;

  int cantidad = cantidadesproporcionadas(x1,x2,x3);
  printf("El numero mayor es %d",cantidad);

  return 0;
}

int cantidadesproporcionadas(float x1, float x2, float x3)

{
  return (x1 > x2 && x1 > x3);

}
