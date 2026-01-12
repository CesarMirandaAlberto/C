/*
							**** ENTRADA Y SALIDA DE DATOS ****

		El presente código implementa la estructuras condicionales if-else
		donde se simula a partir de una variable determinar si un alumno 
		aprobo de año o reprobo y si ademas obtuvo multiples beneficios
		por su calificacion.
		
		Se implementan constantes para evitar números mágicos.
*/

//Inclusión de librerias
#include <stdio.h>

// Constantes
#define EXCELENTE 10
#define APROBATORIA 7

//Función principal;
int main()
{
    unsigned char calificacion;

    calificacion = 5;

	// Toma de desciciones mediante condicional if-else
    if(calificacion == EXCELENTE)
    {
        printf("Felicidades has obtenido una beca\n");
        printf("Y te puedes ir de vacaciones sin preocupaciones\n");
    }
    else if(calificacion >= APROBATORIA && calificacion < EXCELENTE){

         printf("Haz aprobado el curso\n");
        printf("Puedes irte de vacaciones sin preocupaciones\n");
    }
    else{
        printf("Lo sentimos haz reprobado y tienes que repetir el curso en vacaciones\n");
    }
    return 0; // Fin del programa
}
