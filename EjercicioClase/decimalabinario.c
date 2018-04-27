/*Autor: DIANA KARINA VAZQUEZ AGUILAR                      */
/*E-mail: dian24V@hotmail.com                              */
/*Fecha de creacion: 24/04/2018                            */
/*Fecha de actualizacion: 25/04/2018                       */
/*Descripcion: programa para convertir de un numero decimal*/
/*             a binario                                   */


#include <stdio.h>

int main(void)

{

      int binario[100], i=0, j=0, x;
      printf("ingrese un numero decimal: \n");

      scanf("%d",&x);
      printf("el numero binario es : \n");
         for(i=100;i>0;i--)
          {
             binario[i]=x%2;
             x=x/2;
          }

         for(i=1;i<=100;i++)
          {

           if(binario[i]==1)
          {
                  for(j=i;j<=100;j++)
                  {
                   printf("%d",binario[j]);
                  }
                  break;

          }

          }
	printf("\n");

return 0;

}
