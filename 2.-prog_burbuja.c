/*Autor: DIANA KARINA VAZQUEZ AGUILAR                      */
/*E-mail: dian24V@hotmail.com                              */
/*Fecha de creacion: 12/04/2018                            */
/*Fecha de actualizacion: 15/04/2018                       */
/*Descripcion: programa que ordene un arreglo de numeros   */
/*     enteros de forma ascendente con el metodo de burbuja*/


#include <stdio.h>
int main(void)
{
	int vector[10] = {7,1,4,5,8,6,9,2,3,0}, var;
	for (int x = 0; x < 10; ++x)
	{
		for (int y = x+1; y < 10; ++y)
	{
		if (vector[x]>vector[y])
	{
		var = vector[y];
		vector[y] = vector[x];
		vector[x] = var;
	}
	}
	}
		printf("Orden ascendente\n");
		for (int x = 0; x < 10; ++x)
	{
		printf("%d\n", vector[x] );
	}
	     return 0;
}
