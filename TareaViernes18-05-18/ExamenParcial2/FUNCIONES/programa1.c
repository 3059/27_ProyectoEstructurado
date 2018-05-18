/*Autor: DIANA KARINA VAZQUEZ AGUILAR                      */
/*E-mail: dian24V@hotmail.com                              */
/*Fecha de creacion: 17/05/2018                            */
/*Fecha de actualizacion: 17/05/2018                       */
/*Descripcion:Escriba un programa que permita crear un     */
/*arreglo unidimensional de tipo flotante, de tamaño       */

#include <stdio.h>
int main()

{
	float array[10], copia[10], numero;



	for (int i = 0; i < 10; ++i)
	{
		printf("dame un numero : ");
			scanf("%f",&numero[i] );
	}
	for (int i = 0; i < 10; i++)
	{
		copia[i] = array[i];
	}
	printf("Arreglo copiado con valores flotantes");
	for (int i = 0; i < 10 ; i++)
	{
		printf("%f", copia[i]);
	}


	return 0;
}
