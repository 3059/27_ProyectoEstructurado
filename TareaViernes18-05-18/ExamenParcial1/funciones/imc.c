/*Autor: DIANA KARINA VAZQUEZ AGUILAR                      */
/*E-mail: dian24V@hotmail.com                              */
/*Fecha de creacion: 17/05/2018                            */
/*Fecha de actualizacion: 17/05/2018                       */
/*Descripcion:Un nutriólogo solicita un programa para
calcular el Índice de Masa Corporal (IMC) de sus pacientes.
Se te pide desarrollar el programa solicitando a través del
teclado el peso en kg y la estatura en metros de los pacientes*/


#include <stdio.h>

int imcpersona(int peso, int altura);


int main(void)
{
  int peso = 58;
  float altura = 1.60;

  float imc = imcpersona(peso, altura);
  printf("\nEl IMC del la persona es: %f",imc);

  return 0;
}

int imcpersona(int peso, int altura)
{
  return peso / (altura * altura);

}
