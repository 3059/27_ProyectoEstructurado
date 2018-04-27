/*Autor: DIANA KARINA VAZQUEZ AGUILAR                      */
/*E-mail: dian24V@hotmail.com                              */
/*Fecha de creacion: 24/04/2018                            */
/*Fecha de actualizacion: 25/04/2018                       */
/*Descripcion: programa para convertir de un numero binario*/
/*             a decimal                                   */


#include <stdio.h>
#include <math.h>
#include <string.h>


int main(void)
{
  char binario[9];
  int indice, resultado=0;
  printf("ingrese el numero en binario\n");
  scanf("%s",binario);

  for(indice=0; indice<strlen(binario); indice++)

         if(binario[indice]!='0' && binario[indice]!='1')
         {
             printf("El numero no es binario\n");
         }
  for (indice=strlen(binario)-1; indice>=0; indice--)

         if(binario[indice]=='1')
         {
             resultado=resultado+1*pow(2,strlen(binario)-1-indice);
         }
             printf("\nEl numero decimal es: %d\n",resultado);

return 0;
}
