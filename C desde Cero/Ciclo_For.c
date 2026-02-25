/*
    **** OPERADORES ARITMETICOS  ****

    El presente código implementa el uso del ciclo for para solicitar calificaciones 
	de un alumno al mismo tiempo en que se calcula el promedio de las mismas.
	Se implementa el uso del casting para convertir una variable de tipo entero
	a tipo flotante y de esta forma representar el valor correcto en punto decimal.
	
*/

//Inclusión de librerias
#include <stdio.h>

//Constante
#define MATERIAS 5

//Función principal 
int main()
{
    //Defincion de variables
    int materia;
    int sumatoria;
    float promedio;

    sumatoria =0;

    //Ciclo for
    for(int i=0; i<MATERIAS; i++) //Inicialización
    {
        //Instrucciones
        printf("\nIngresa la calificacion de la materia %i: ", i+1);
        scanf("%i", &materia);

        sumatoria += materia;
        //No hay mas  instrucciones se reinicia el ciclo sumando 1 al contador equivalente una vuelta terminada
    }

    promedio =  (float)sumatoria /*Casting*// MATERIAS;

    printf("\nEl promedio de general de las materias: %.2f", promedio);

    return 0; // Fin del programa
}
