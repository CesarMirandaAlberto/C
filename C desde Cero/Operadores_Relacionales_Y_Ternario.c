/*
		**** OPERADORES RELACIONALES Y TERNARIO ****
	Este código demuestra el uso de los operadores relacionales y el operador ternario en C.
    Se implementan diferentes casos de prueba para evaluar el comportamiento de estos operadores.
	antes mencionados.
	
	* CASO DE PRUEBA 1: Determinar cual número de dos es menor y el número resultante es asignado a una variable diferente.
	* CASO DE PRUEBA 2: Determinar sin un alumno esta Aprobado / Reprobado y el asignar 'A' 'R' según el caso.
	* CASO DE PRUEBA 3: Determinar si un número es par o impar y asignar texto a una cadena de caracteres.
	* CASO DE PRUEBA 4: Definir si dos números son iguales o diferentes y asignar texto a la cadena de caracteres.
*/

#include <stdio.h>

int main()
{

	// Declaración de variables
    int Numero1;
    int Numero2;
    int NumeroMenor;
    int calificacion;
    int aprobado;
    char Estatus;
	
    //Asignacion de valores
	Numero1= 9;
    Numero2 = 16;
    aprobado = 8;
    calificacion = 8;

	// **** FUNCIONAMIENTO DEL OPERADOR TERNARIO ****
	
	
	// (Numero1 < Numero2) ? si es verdadero : si es falso

    // CASO DE PRUEBA 1 Numero menor
    NumeroMenor = (Numero1 < Numero2) ? Numero1 : Numero2;
    printf("El numero menor es: %i", NumeroMenor);

    // CASO DE PRUEBA 2 Aprobado/Reprobado
    Estatus = (calificacion >= aprobado) ? 'A' : 'R';
    printf("\nEstatus de materia: %c", Estatus);

    // CASO DE PRUEBA 3 Par o Impar
    const char* paridad = (Numero2 % 2 == 0) ? "Par" : "Impar";
    printf("\nEl numero es: %s", paridad);
 
    // CASO DE PRUEBA 4 Igualdad o desigualdad de dos números
    const char* igual = (Numero1 != Numero2) ? "son diferentes" : "son iguales";
    printf("\n Numero 1 y  Numero 2: %s", igual);

    return 0; //Fin del programa.

}


