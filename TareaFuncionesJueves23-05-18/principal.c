/*----------------------------------------------------------------*/
/*Autor: DIANA KARINA VAZQUEZ AGUILAR                             */
/*E-mail: dian24V@hotmail.com                                     */
/*Fecha de creacion: 22/05/2018                                   */
/*Fecha de actualizacion: 22/05/2018                              */
/* Descripcion: programa para ejemplificar archivos .h y .c       */
/*----------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "colores.h"                   /* En este archivo se definen las secuencia para los colres            */
#include "enums.h"                     /* En este archivo se definen los enums para los menus                 */
#include "prototipofunciones.h"        /* En este archivo se definen todos los prototipos de funciones        */

                                       /* Los #define estan en el archivo prototipofunciones.h                */

int numHelados;                        /* Variable global: se define aqui en el main, pero se utiliza,        */
                                       /* manteniendo su valor en operacionesHelados.c y ordenacion.c          */

int main(void)
{
  Helado listaHelado[TOTAL_HELADO];    /* Declaracion de una variable de arreglo de estructura helado[]       */
	int opcion;                          /* Variable que controla las opciones del menu principal.               */

	do{
    menuPrincipal();                   /* Se llama (invoca) a la funcion menuPrincipal() implementada en      */
                                       /* operacionespantalla.c                                               */

		printf(_TCYAN _NEGRITA "\n\nSeleccione una opcion: ");
		scanf("%d", &opcion);

		switch(opcion)
		{
			case CREAR:
              while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
              printf(_TCYAN     _NEGRITA "\n\n1. A L T A     D E     H E L A D O S\n\n");

              printf(_TAMARILLO _NEGRITA "\n\nIntroduce el numero de Helados: " _TVERDE);
							scanf("%d",&numHelados);
							printf("\n\n" _ARESET);

							for(int i = 0; i < numHelados; i++)
							{
                while(getchar() != '\n');              /* Limpiar el buffer en caso de tener almacenado el salgo de linea                */
                listaHelado[i] = crearNuevoHelado();   /* Se invoca a la funcion crearNuevoHelado() implementada en operacionesHelados.c  */
              }
              while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea                */
						  detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case LISTAR:
              while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TCYAN _NEGRITA "\n\n2. L I S T A     D E    H E L A D O S\n\n");
              mostrarListaHelado(listaHelado, 0);      /* Se invoca a la funcion mostrarHelado() implementada en operacionesHelados.c     */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case LISTAR_ASC:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. L I S T A R    A S C E D E N T E\n\n");
              mostrarListaHelado(listaHelado, 1);      /* Se invoca a la funcion mostrarHelado() implementada en operacionesHelados.c     */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case LISTAR_DES:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. L I S T A R    D E S C E D E N T E\n\n");
              mostrarListaHelado(listaHelado, 2);      /* Se invoca a la funcion mostrarHelado() implementada en operacionesHelados.c     */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case BUSCAR:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
						  printf(_TAMARILLO _NEGRITA "\n\n3. B U S C A R\n\n");
              buscarHelado(listaHelado);               /* Se invoca a la funcion buscarHelado() implementada en operacionesHelados.c      */
						  detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case ACTUALIZAR:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. A C T U A L I Z A R\n\n");
              actualizarHelado(listaHelado);           /* Se invoca a la funcion actualizarHelado() implementada en operacionesHelado.c  */
              while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case ELIMINAR:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. E L I M I N A R\n\n");
              eliminarHelado(listaHelado);             /* Se invoca a la funcion eliminarHelado() implementada en operacionesHelados.c    */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case SALIR:
							system("clear");                         /* Antes de terminar la ejecucion del programa, limpia la pantalla */
							exit(0);                                 /* Termina la ejecucion del programa                               */
		}
	}while(opcion != SALIR);

	return 0;
}
