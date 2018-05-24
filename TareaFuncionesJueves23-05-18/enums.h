/*----------------------------------------------------------------*/
/*Autor: DIANA KARINA VAZQUEZ AGUILAR                             */
/*E-mail: dian24V@hotmail.com                                     */
/*Fecha de creacion: 22/05/2018                                   */
/*Fecha de actualizacion: 22/05/2018                              */
/* Descripcion: definicion de las variables enum.                 */
/*----------------------------------------------------------------*/

#ifndef ENUMS_H_
#define ENUMS_H_

/* Declaracion de enumeraciones para el control de menu de opciones:                */
/* CREAR      = 1                                                                   */
/* LISTAR     = 2                                                                   */
/* LISTAR_ASC = 3                                                                   */
/* LISTAR_DES = 4                                                                   */
/* BUSCAR     = 5                                                                   */
/* ACTUALIZAR = 6                                                                   */
/* ELIMINAR   = 7                                                                   */
/* SALIR      = 8                                                                   */
enum OPCIONES_MENU{CREAR = 1,
									 LISTAR,
									 LISTAR_ASC,
                   LISTAR_DES,
                   BUSCAR,
                   ACTUALIZAR,
                   ELIMINAR,
                   SALIR};


/* Declaracion de enumeracion para el manejo de los casos: */
/* Buscar por:     sabor                                   */
/* Actualizar por: sabor                                   */
/* Eliminar por:   sabor                                  */
enum OPCIONES_BUSCAR_ACTUALIZAR_ELIMINAR{_xsabor=1};

#endif
