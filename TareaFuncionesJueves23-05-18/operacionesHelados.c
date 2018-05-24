/*----------------------------------------------------------------*/
/*Autor: DIANA KARINA VAZQUEZ AGUILAR                             */
/*E-mail: dian24V@hotmail.com                                     */
/*Fecha de creacion: 22/05/2018                                   */
/*Fecha de actualizacion: 22/05/2018                              */
/* Descripcion: implementacion de funciones sobre la estructura   */
/*              HELADOS: crear, listar, ordenar, buscar,           */
/*              actualizar y eliminar.                            */
/*----------------------------------------------------------------*/

#include <stdio.h>
#include <string.h>

/* Se incluyen los archivos necesarios */
#include "colores.h"
#include "prototipofunciones.h"
#include "enums.h"

/* Variable global inicializada en principal.c */
extern int numHelados;



Helado crearNuevoHelado(void)
{
  Helado helado;

  printf(_TBLANCO _NEGRITA "\n\nIntroduce el sabor del Helado:"              _NNEGRITA _TVERDE);
  fgets(helado.sabor, TAM_NOM, stdin);                                    /* Solicita el sabor del Helado al usuario          */
  strcpy(helado.sabor, strtok(helado.sabor, "\n"));								    /* Elimina el salto de linea '\n' que genera fgets() */

  printf(_TBLANCO _NEGRITA "Introduce el color del Helado:"           _NNEGRITA _TVERDE);
  fgets(helado.color, TAM_MAT, stdin);                                 /* Solicita el color del Helado al usuario        */
  strcpy(helado.color, strtok(helado.color, "\n"));             /* Elimina el salto de linea '\n' que genera fgets() */

  printf(_TBLANCO _NEGRITA "Introduce el tamaño del Helado:" _NNEGRITA _TVERDE);
  fgets(helado.tamanio, TAM_FECHA, stdin);                         /* Solicita el tamanio del Helado al usuario        */
  strcpy(helado.tamanio, strtok(helado.tamanio, "\n")); /*Elimina el salto de linea '\n' que genera fgets    */

  printf(_TBLANCO _NEGRITA "Introduce el precio del Helado:"                _NNEGRITA _TVERDE);
  scanf("%f", &helado.precio);

  return helado;
}




void mostrarListaHelado(Helado listaHelado[], int ordenar)
{
  int arrayTemp[numHelados];
  for(int i = 0; i < numHelados; i++)
  {
    arrayTemp[i] = i;
  }
  if(ordenar == 1)            /* 1: ordenacion ascendente  */
  {
    memcpy(arrayTemp, ordenarAscendente(listaHelado, arrayTemp), sizeof(arrayTemp));   /* memcpy: permite compiar un arreglo a otro */
  } else if(ordenar == 2){    /* 2: ordenacion descendente */
    memcpy(arrayTemp, ordenarDescendente(listaHelado, arrayTemp), sizeof(arrayTemp));  /* memcpy: permite compiar un arreglo a otro */
  }
  mostrarEncabezadoTabla();
  for(int i = 0; i < numHelados; i++)
  {
    mostrarHelado(listaHelado[arrayTemp[i]]);
    printf("\n");
  }
}



void buscarHelado(Helado listaHelado[])
{
  char saborBuscar[TAM_NOM];            /* Almacena el sabor del Helado a buscar dentro de la estructura                */


        printf(_TCYAN _NEGRITA "\n\nIngrese el sabor del Helado: ");
        fgets(saborBuscar, TAM_NOM, stdin);
        strcpy(saborBuscar, strtok(saborBuscar, "\n"));

        for(int i = 0; i < numHelados; i++)
            if(strcmp(saborBuscar, listaHelado[i].sabor) == 0)
            {
                mostrarEncabezadoTabla();
                mostrarHelado(listaHelado[i]);
            }
}



void actualizarHelado(Helado listaHelado[])
{
  char saborBuscar[TAM_NOM];            /* Almacena el sabor del Helado a buscar dentro de la estructura                */


          printf(_TCYAN _NEGRITA "\n\nIntroduce el sabor del Helado: ");
          fgets(saborBuscar, TAM_NOM, stdin);
          strcpy(saborBuscar, strtok(saborBuscar, "\n"));

          for(int i = 0; i < numHelados; i++)
          {
              if(strcmp(saborBuscar, listaHelado[i].sabor) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarHelado(listaHelado[i]);

                  printf("\n\n");

                  listaHelado[i] = crearNuevoHelado();

                  mostrarEncabezadoTabla();
                  mostrarHelado(listaHelado[i]);


              }
          }


}



void eliminarHelado(Helado listaHelado[])
{

  char saborBuscar[TAM_NOM];            /* Almacena el sabor del Helado a buscar dentro de la estructura                */



          printf(_TCYAN _NEGRITA "\n\nIntroduce el sabor del Helado: ");
          fgets(saborBuscar, TAM_NOM, stdin);
          strcpy(saborBuscar, strtok(saborBuscar, "\n"));

          for(int i = 0; i < numHelados; i++)
          {
              if(strcmp(saborBuscar, listaHelado[i].sabor) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarHelado(listaHelado[i]);

                  printf("\n\n");

                  printf(_TBLANCO _NEGRITA "\n\nPresione una (s) si esta seguro de eliminar el registo:  "                _NNEGRITA _TVERDE);

                  char opcionEliminar;
                  while((opcionEliminar = getchar()) == 's')
                  {
                    printf("\nSizeof: %lu\n", sizeof(* listaHelado));
                    listaHelado = eliminarUnHelado(listaHelado, i);
                  }

                  printf("\n\n");

              }
          }


}



Helado * eliminarUnHelado(Helado listaHelado[], int posicion)
{
  if(posicion < (numHelados - 1))
  {
    for(int j = posicion; j < numHelados-1; j++)
    {
      strcpy(listaHelado[j].sabor,          listaHelado[j+1].sabor);
      strcpy(listaHelado[j].color,       listaHelado[j+1].color);
      strcpy(listaHelado[j].tamanio, listaHelado[j+1].tamanio);
      listaHelado[j].precio     = listaHelado[j+1].precio;

  }
}
  strcpy(listaHelado[numHelados-1].sabor,          "");
  strcpy(listaHelado[numHelados-1].color,       "");
  strcpy(listaHelado[numHelados-1].tamanio, "");
  listaHelado[numHelados-1].precio     = '\0';


  numHelados--;

  printf("\n\nEl registro se ha eliminado exitosamente.\n\n");

  return listaHelado;

}
