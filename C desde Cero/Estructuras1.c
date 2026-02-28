/*
				**** ESTRUCTURAS DE DATOS ****
				
	El presente código implementa el uso de las estructuras de datos donde se simula el
	llenado de datos de tarjetas de béisbol donde la estructura es la carta con los datos
	que posteriormente son llenados en la función principal.
	
	!! ACERCA DEL CÓDIGO !!
	Definición de estrucuta : Para crear cartas con las caracteristicas de la estructura.
	
	IMPRESION DE  DATOS 
	Se imprimen en consola las cartas creadas.
	
*/

//Inclusión de librerias
#include <stdio.h>

//Definición de constantes
#define CARACTERES 20

//Definición de estructura
struct Tarjeta {
    char Nombre[CARACTERES];
    int Posicion;
    int Numero;
    int HomeRuns;
    float PB;
    char Premios[CARACTERES];
    int Antiguedad
};

//Función principal
int main()
{
	//Creación de cartas con las caracteristicas de la estrucuta definida
    struct Tarjeta Pitcher;
    struct Tarjeta Catcher;
    struct Tarjeta Tercera;

    //ASIGNACIÓN DE VALORES
	
    //PITCHER
    strcpy(Pitcher.Nombre, "Anonimo1");
    Pitcher.Posicion = 1;
    Pitcher.Numero = 5;
    Pitcher.HomeRuns = 123;
    Pitcher.PB = 0.123;
     strcpy(Pitcher.Premios, "Mejor brazo");
    Pitcher.Antiguedad = 5;

    //CATCHER
    strcpy(Catcher.Nombre, "Anonimo 2");
    Catcher.Posicion = 2;
    Catcher.Numero = 14;
    Catcher.HomeRuns = 456;
    Catcher.PB = 0.456;
    strcpy(Pitcher.Premios, "Mejor bat");
    Catcher.Antiguedad = 5;

	// IMPRESION DE DATOS
    printf("\t\t\t !!!TUS TARJETAS !!!\n\n");
    printf("--------------------------\n");
    printf("|Nombre: %s", Pitcher.Nombre);
    printf("\n|Posicion: %i", Pitcher.Posicion);
    printf("\n|Numero: %i", Pitcher.Numero);
    printf("\n|HomeRuns: %i", Pitcher.HomeRuns);
    printf("\n|Promedio de bateo: %.3f", Pitcher.PB);
    printf("\n|Premios: %s", Pitcher.Nombre);
    printf("\n|Antiguedad: %i", Pitcher.Premios);
    printf("\n|-------------------------");

    printf("\t\t\t !!!TUS TARJETAS !!!\n\n");
    printf("--------------------------\n");
    printf("|Nombre: %s", Catcher.Nombre);
    printf("\n|Posicion: %i", Catcher.Posicion);
    printf("\n|Numero: %i", Catcher.Numero);
    printf("\n|HomeRuns: %i", Catcher.HomeRuns);
    printf("\n|Promedio de bateo: %.3f", Catcher.PB);
    printf("\n|Premios: %s", Catcher.Nombre);
    printf("\n|Antiguedad: %i", Catcher.Premios);
    printf("\n|-------------------------");

    return 0;
}
