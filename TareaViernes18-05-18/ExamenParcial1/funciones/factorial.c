/*Autor: DIANA KARINA VAZQUEZ AGUILAR                      */
/*E-mail: dian24V@hotmail.com                              */
/*Fecha de creacion: 17/05/2018                            */
/*Fecha de actualizacion: 17/05/2018                       */
/*Descripcion:programa que realiza un factorial            */

#include <stdio.h>

int factorial(int n);

int main(void)
{
	int r,n;
	printf("Inserta el valor deseado a determinar su factorial: ");
	scanf("%d",&n);
	r = factorial(n);
	printf("resultado: %d\n",r );
	return 0;
}

int factorial(int n)
{
	int r=1;
	if (n==0)
	{
		return 1;
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			r = r*i;
		}
		return r;
	}
}
