/*Autor: DIANA KARINA VAZQUEZ AGUILAR                      */
/*E-mail: dian24V@hotmail.com                              */
/*Fecha de creacion: 25/04/2018                            */
/*Fecha de actualizacion: 26/04/2018                       */
/*Descripcion:                                             */


#include <stdio.h>
int main (void)

{
#define RESET "\x1b[0m"
#define NEGRO "\x1b[30m"
#define ROJO "\x1b[31m"
#define VERDE "\x1b[32m"
#define AMARILLO "\x1b[34m"
#define AZUL "\x1b[35m"
#define MORADO "\x1b[m"
#define CYAN "\x1b[36m"
/*colores del texto*/

#define NEGRITA "\x1b[1m"/*TEXTO EN NEGRITAS*/



#define TAM 20 /*DECLARACION DEL TAMAÑO DEL ARREGLO*/
#define ROW 5 /*DECLARACION DE LAS FILAS*/
#define COL 5/*DECLARACION DE LAS COLUMNAS*/

/*DEFINOCION DE TIPOS DE DATOS DE ESTRUCTURA*/
/*STRUCT NOMBRE ESTRUCTURA


struct Alumno
{
    char matricula[10];
    char curp[18];
    char mivelEstudio[30];
    char nombre[50];
    int edad;
    char sexo[1];
    char fechaNacimiento[10];
    float peso;
    float estatura;
    char tipoSangre;
    char telefono[12];
    char direccion[50];
    char alergia[20];
    char deporte[15];
}
*/

struct Alumno
{
    char matricula[10];
    char nombre[50];
    char sexo[1];
    int edad;
    float peso;
    float estatura;
};

/*cuerpo de la funcion*/
int main(void)
{
/*declaracion de la estructura alumnos*/
struct Alumno alumno edson;/*declaracion de la variable alumnos*/

/*asignacion de datos a los miembros de la estructura Alumno*/
/*tipo de operador punto(.)*/

/*edson.matricula="2017060236"*/
/*de preferencia utilizar la funcion strcpy o strncpy de la biblioteca string.h*/
strcpy(edson.matricula,"2017060236");
strcpy(edson.nombre,"SANTOS ZARATE EDSON OSNART");
edson.sexo='H';
edson.eda=19;
edson.estatura=1.60;
edson.peso=60;

printf(ROJO "%S\n"edson.nombre);
printf(AMARILLO "%S\n"edson.matricula);
printf(MORADO "%S\n"edson.sexo);
printf(VERDE "%S\n"edson.edad);
printf(ROJO "%S\n"edson.nombre);
printf(ROJO "%S\n"edson.nombre);














return 0;
}
