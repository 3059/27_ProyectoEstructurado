/*Autor: DIANA KARINA VAZQUEZ AGUILAR                      */
/*E-mail: dian24V@hotmail.com                              */
/*Fecha de creacion: 17/05/2018                            */
/*Fecha de actualizacion: 17/05/2018                       */
/*Descripcion:Suponga que la empresa de transportes        */
/*Autobuses de Oriente (ADO) desea adquirir un programa que*/
/*controle la venta de los boletos por autobús. Se te pide */
/*realizar un programa que permita llevar el               */
/*control de ventas de boletos utilizando un arreglo       */
/*unidimensional                                           */

#include <stdio.h>

int main(void)
{
    int asiento;
    int array[35] = {0};

      printf("Ingrese el numero de asiento en el que usted desea viajar\n");
      scanf("%d", &asiento);
	for(int i = 0; i<35; i++);
	{
		printf("Igrese un numero de asiento\n");
			scanf("%d", &asiento);
		if (array[asiento-1] == 0)
		{
			printf("asiento disponible");
		}else
   			{
				printf("asiento no disponible, buscar otro asiento\n");
			}
		asiento = 0;
return 0;
	}
}
