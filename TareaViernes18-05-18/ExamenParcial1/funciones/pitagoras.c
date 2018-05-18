/*Autor: DIANA KARINA VAZQUEZ AGUILAR                      */
/*E-mail: dian24V@hotmail.com                              */
/*Fecha de creacion: 17/05/2018                            */
/*Fecha de actualizacion: 17/05/2018                       */
/*Descripcion:Elabore un programa para obtener la distancia*/
/*entre dos puntos en el plano cartesiano                  */

#include <stdio.h>
#include <math.h>

int distanciadospuntos(float x1, float x2, float y1, float y2, float distancia);


int main(void)
{
  float x1=5;
  float x2=6.7;
  float y1=8.3;
  float y2=4.5;
  float distancia=8;

  float distancias = distanciadospuntos(x1,x2,y1,y2,distancia);
  printf("\nLa distancia entre dos puntos es: %f",distancias);

  return 0;
}

int distanciadospuntos(float x1, float x2, float y1, float y2, float distancia)

{
  return distancia=sqrt((x1-y1)*(x1-y1)+(x2-y2)*(x2-y2));

}
