/*Autor: DIANA KARINA VAZQUEZ AGUILAR                      */
/*E-mail: dian24V@hotmail.com                              */
/*Fecha de creacion: 17/05/2018                            */
/*Fecha de actualizacion: 17/05/2018                       */
/*Descripcion:Elabore un programa que muestre en pantalla  */
/*la tabla de multiplicar del 1 al 5                       */

#include<stdio.h>

int main (void)
{
	int num=1, cont;

	for(num=1; num<=5;num++)
	{
					printf("\nTabla de multiplicar del %d\n\n", num);
		{
		for(cont=0; cont<=num;cont++)
		{
			for(cont=0;cont<=10;cont++)
			{
				printf("%d\tX\t%d\t=\t%d\n", num, cont,(num * cont));
			}
	  }
		{
			printf("\n");
		}
	}
}
	return 0;
}
