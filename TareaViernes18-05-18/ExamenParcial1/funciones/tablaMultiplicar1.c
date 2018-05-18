/*Autor: DIANA KARINA VAZQUEZ AGUILAR                      */
/*E-mail: dian24V@hotmail.com                              */
/*Fecha de creacion: 17/05/2018                            */
/*Fecha de actualizacion: 17/05/2018                       */
/*Descripcion:Elabore un programa que muestre en pantalla  */
/*la tabla de multiplicar del 1                            */


/*Declaracion de Bibliotecas*/
#include<stdio.h>

int main (void)
{
	int num=1, cont;
	printf("\nTabla de multiplicar del numero 1\n\n");

	for(cont=0; cont<=num;cont++)
	{
		for(cont=0;cont<=10;cont++)
		{
			printf("%d\tX\t%d\t=\t%d\n", num, cont,(num * cont));
		}
	}
	return 0;
}
