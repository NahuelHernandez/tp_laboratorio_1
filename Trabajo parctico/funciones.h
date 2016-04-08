#ifndef DIRECCIONFUNCIONES_H_INCLUDED
#define DIRECCIONFUNCIONES_H_INCLUDED
#include <stdio.h>
#include <conio.h>
/*          Documentación
x= primero operando pasado por el usuario mediante su pedido en el main.
y= segundo operando pasado por el usuario mediante su pedido en el main.
resp= Variable usada para guardar el resultado de las operaciones para luego ser mostrado.
return= Devuelve el resultado de factoriar

Funciones:
void sumar(float x, float y ); ----> funcion que al recibir 2 numeros realiza y muestra la suma entre los 2 operandos recibidos.
void restar(float x, float y ); ----> funcion que al recibir 2 numeros realiza y muestra la resta entre los 2 operandos recibidos.
void dividir(float x, float y ); ----> funcion que al recibir 2 numeros realiza y muestra la divición entre los 2 operandos recibidos. (el 2do no puede ser 0)
void multiplicar(float x, float y ); ----> funcion que al recibir 2 numeros realiza y muestra la multiplicación entre los 2 operandos recibidos.
int factorial (float x); ----> funcion que al recibir 1 numero realiza y devuelve el valor de la factoriazacion del operando recibido.
*/

void sumar(float x, float y );
void restar(float x, float y );
void dividir(float x, float y );
void multiplicar(float x, float y );
int factorial (float x);



void sumar(float x, float y)
{
    float resp;
   resp= x+y;
 printf ("\nSu resultado de suma es:\t%.2f\n ",resp);
}

void restar(float x, float y)
{
    float resp;
   resp= x-y;
 printf ("\nSu resultado de resta es:\t%.2f \n",resp);
}

void dividir(float x, float y)
{
    float resp;
   resp= x/y;
printf ("\nSu resultado division es:\t%.2f \n",resp);
}

void multiplicar(float x, float y)
{
    float resp;
   resp= x*y;
 printf ("\nSu resultado de multiplicacion es:\t%.2f \n",resp);
}

int factorial(float x)
{
    int resp;

    if (x==0)
        {
         resp=1;
        }
         else
            {
        resp = x * factorial(x-1);
        }
        return resp;
 }





#endif // DIRECCIONFUNCIONES_H_INCLUDED
