/*----------------------------------------------------------------*/
/*Autor: DIANA KARINA VAZQUEZ AGUILAR                             */
/*E-mail: dian24V@hotmail.com                                     */
/*Fecha de creacion: 22/05/2018                                   */
/*Fecha de actualizacion: 22/05/2018                              */
/* Descripcion: definicion de constantes, estructura y prototipo  */
/*              de funciones.                                     */
/*----------------------------------------------------------------*/

#ifndef PROTOTIPOFUNCIONES_H_
#define PROTOTIPOFUNCIONES_H_

#define TAM_NOM      50        /* Definicion del tamanio del arreglo unidimensional */
#define TAM_MAT      12        /* Tamanio del sabor del Helado                      */
#define TAM_FECHA    12        /* Tamanio del color del Helado                      */
#define TOTAL_HELADO 10        /* Tamanio del tamanio del Helado                    */


/* Se define una estructura para modelar los datos del Helado. */
/* Los miembros de la estructura son:                             */
/*                                    - sabor                     */
/*                                    - color                     */
/*                                    - tamanio                   */
/*                                    - precio                    */

typedef struct
{
	char sabor[TAM_NOM];
	char color[TAM_MAT];
	char tamanio[TAM_FECHA];
	float precio;
}Helado;


/* Funciones que imprimen mensajes en pantalla */
void menuPrincipal(void);
void mostrarEncabezadoTabla(void);
void mostrarHelado(Helado);
void detenerPantalla(void);


/* Funciones que realizan las operaciones sobre la lista de Helados*/
Helado crearNuevoHelado(void);
void mostrarListaHelado(Helado [], int);
void buscarHelado(Helado []);
void actualizarHelado(Helado []);
void eliminarHelado(Helado []);


/* Funcion que permite eliminar el Helado, es invocada por la funcion eliminarHelado() */
Helado * eliminarUnHelado(Helado [], int);


/* Funciones que permiten ordenar los datos de los helados */
int * ordenarAscendente(Helado [], int []);
int * ordenarDescendente(Helado [], int []);


#endif
