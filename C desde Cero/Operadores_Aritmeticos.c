/*
    **** OPERADORES ARITMETICOS  ****

    Este código implementa el uso de los operadores aritmeticos en C
	donde se desarrollan las cuatro operaciones básicas de la aritmetica.

*/

// Inclusión de librería
#include <stdio.h>

//Función principal
int main()
{
    //Declaracion de variables
    int x;
    int y;

    //Asignación de valores
    x= 40;
    y= 5;

    x = x + y; //Asignación de operaciones 

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
