/*----------------------------------------------------------------*/
/*Autor: DIANA KARINA VAZQUEZ AGUILAR                             */
/*E-mail: dian24V@hotmail.com                                     */
/*Fecha de creacion: 22/05/2018                                   */
/*Fecha de actualizacion: 22/05/2018                              */
/* Descripcion: implementacion de las funciones de ordenacion.    */
/*----------------------------------------------------------------*/

#include <string.h>
#include "prototipofunciones.h"

extern int numHelados;

int * ordenarAscendente(Helado listaHelado[], int arrayTemp[])
{
  for(int i = 0; i < numHelados; i++)
  {
    for(int j = i + 1; j < numHelados; j++)
    {
      if(strcmp(listaHelado[arrayTemp[i]].sabor, listaHelado[arrayTemp[j]].sabor) > 0)
      {
        int aux = arrayTemp[i];
        arrayTemp[i] = arrayTemp[j];
        arrayTemp[j] = aux;
      }
    }
  }
  return arrayTemp;
}



int * ordenarDescendente(Helado listaHelado[], int arrayTemp[])
{
  for(int i = 0; i < numHelados; i++)
  {
    for(int j = i + 1; j < numHelados; j++)
    {
      if(strcmp(listaHelado[arrayTemp[i]].sabor, listaHelado[arrayTemp[j]].sabor) < 0)
      {
        int aux = arrayTemp[i];
        arrayTemp[i] = arrayTemp[j];
        arrayTemp[j] = aux;
      }
    }
  }
  return arrayTemp;
}
