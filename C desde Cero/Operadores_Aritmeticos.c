/*
    **** OPERADORES ARITMETICOS  ****

    Este c�digo implementa el uso de los operadores aritmeticos en C
	donde se desarrollan las cuatro operaciones b�sicas de la aritmetica.

*/

// Inclusi�n de librer�a
#include <stdio.h>

//Funci�n principal
int main()
{
    //Declaracion de variables
    int x;
    int y;

    //Asignaci�n de valores
    x= 40;
    y= 5;

    x = x + y; //Asignaci�n de operaciones 

    //Imprimir resultados
    printf("\t\tResultados", x);

    printf("\nx + y = %i",x);
    x = x-y;
    printf("\nx - y = %i",x);
    x = x*y;
    printf("\nx * y = %i",x);
    x = x/y;
    printf("\nx / y = %i",x);


    return 0; //Fin del programa
}
