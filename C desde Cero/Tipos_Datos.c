/*
						**** TIPOS DE DATOS ****

    El presente c�digo implementa el uso de tipos de datos diferentes
	en C.
	El c�digo simula guardar los datos de un jugador de b�isbol Numero,
	promedio de bateo, Inicial.
	**** El c�digo es parte del curso de programaci�n en C desde cero en
	el canal de yt donde se explica ****
*/

//Inclusi�n de libreria 
#include <stdio.h>

//Constantes
#define NUMERO 3
#define INICIAL 'R'

//Funci�n principal
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
	// lineas de c�digo donde se les asigna un nuevo valor. Dado que son constantes esto dar� un error.
	
	// numeroJugador = 8;
	// Inicial 'F';
	
    return 0; // Fin del programa
}
