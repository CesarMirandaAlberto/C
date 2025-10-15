/*
						**** TIPOS DE DATOS ****

    El presente código implementa el uso de tipos de datos diferentes
	en C.
	El código simula guardar los datos de un jugador de béisbol Numero,
	promedio de bateo, Inicial.
	**** El código es parte del curso de programación en C desde cero en
	el canal de yt donde se explica ****
*/

//Inclusión de libreria 
#include <stdio.h>

//Constantes
#define NUMERO 3
#define INICIAL 'R'

//Función principal
int main()
{
    //Variables y Constantes
    float PromedioBateo = 0.123;

    //Constantes
    const int numeroJugador = NUMERO;
    const char Inicial = INICIAL;

    // Va a ver cambios aqui
    PromedioBateo = 0.456;

   //Imprimir los valores en pantalla
     printf("El numero del jugador es: %i ", numeroJugador);
     printf("\nEl promedio de bateo del jugador es: %.2f ", PromedioBateo);
     printf("\nLa inicial del jugador es: %c ", Inicial);


	
	//  **** CASO DE PRUEBA ****
	// Para comprender que pasa al modificar el numerJugador e Inicial descomenta las siguientes+
	// lineas de código donde se les asigna un nuevo valor. Dado que son constantes esto dará un error.
	
	// numeroJugador = 8;
	// Inicial 'F';
	
    return 0; // Fin del programa
}
