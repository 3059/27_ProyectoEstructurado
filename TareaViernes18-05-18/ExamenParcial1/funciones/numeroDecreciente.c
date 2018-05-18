/*Autor: DIANA KARINA VAZQUEZ AGUILAR                      */
/*E-mail: dian24V@hotmail.com                              */
/*Fecha de creacion: 17/05/2018                            */
/*Fecha de actualizacion: 17/05/2018                       */
/*Descripcion:Elabore un programa que imprima los números  */
/*del 100 al 0, en orden decreciente                       */
#include <stdio.h>

int numeroorden(int a);


int main(void)
{
  int a=100;

  int orden = numeroorden(a);

  printf("%d\n",orden);


  return 0;
}

  int numeroorden(int a)

{
  for (a=100;a>=1;a--)
	{
		printf("%d\n",a);
	}

}
