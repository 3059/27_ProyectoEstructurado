/*----------------------------------------------------------------*/
/*Autor: DIANA KARINA VAZQUEZ AGUILAR                             */
/*E-mail: dian24V@hotmail.com                                     */
/*Fecha de creacion: 22/05/2018                                   */
/*Fecha de actualizacion: 22/05/2018                              */
/* Descripcion: implementacion de funciones que muestran datos en */
/*              pantalla.                                         */
/*----------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

#include "colores.h"
#include "prototipofunciones.h"

void menuPrincipal(void)
{
  system("clear");  /* Limpia toda la pantalla.           */
  puts("");         /* Haciendo salto de lina con puts(). */

  printf(_FVERDE _TCYAN  _NEGRITA _SUBRAYADO "\nS I S T E M A     D E    H E L A D O S" _ARESET);

  printf(_TMORADO _NEGRITA "\nM E N U    P R I N C I P A L\n");

  printf(_TAMARILLO _NEGRITA "\n\t1. Alta de Helados");
  printf(_TAMARILLO _NEGRITA "\n\t2. Lista de Helados");
  printf(_TAMARILLO _NEGRITA "\n\t3. Lista de Helados Acendente");
  printf(_TAMARILLO _NEGRITA "\n\t4. Lista de Helados Descendente");
  printf(_TAMARILLO _NEGRITA "\n\t5. Buscar Helado");
  printf(_TAMARILLO _NEGRITA "\n\t6. Actualizar Helado");
  printf(_TAMARILLO _NEGRITA "\n\t7. Eliminar Helado");
  printf(_TAMARILLO _NEGRITA "\n\t8. Salir");
}

void mostrarEncabezadoTabla(void){
  printf(_TROJO     _NEGRITA);
  printf("%-40.25s|%-12s|%-18s|\tprecio\t|", "SABOR", "COLOR", "TAMANIO");
  printf("\n----------------------------------------------------------------------------------------------------------------------------\n");
}

void mostrarHelado(Helado helado)
{
  printf(_TBLANCO _NEGRITA);
  printf("%-40.25s|%-12s|%-18s|\t%f\t|", helado.sabor, helado.color, helado.tamanio, helado.precio);
}

void detenerPantalla(void)
{
  char c;                           /* Lee un caracter y valida el salto de linea para salir de la opcion. */
  printf(_TAMARILLO _NEGRITA "\n\nPresiones Enter para salir: ");
  while((c=getchar()) != '\n')  /* Solicita un enter al usuario para reiniciar el menu principal */
  {}
}
