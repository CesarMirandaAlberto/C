/*
				**** ARREGLOS BIDIMENSIONALES Y DIMENSIONALES ****
				
	El presente código implementa el uso de matrices y vectores,
	MATRICES: se utilizan para almacenar las califiaciones de multiples materias
	VECTOR  Almacena el promedio calculado de cada alumno
	
	LLENADO DE MATRIZ : el llenado de datos de la matriz se hace directamente desde el código.
	
	CALCULO DE PROMEDIO : Se calcula el promedio de cada fila y este es almacenado en el vector.
	1.- Mediante una variable auxiliar a través de un ciclo for se iteran las posiciones de las columnas	
		y se va sumando los valores.
	2.- A través del operador ternario se asigna a la variable promedio mayor el valor mas alto
	3.- El promedio calculado es almacenado en el vector a traves de las iteraciones del ciclo for.
	
	
*/

// Inclusión de librerias
#include <stdio.h>

//Definición de constantes
#define FILAS 3
#define COLUMNAS 4
#define MATERIAS 4


int main()
{
	// Definición de matriz y vector 
    float Calificaciones[FILAS][COLUMNAS];
    float Promedios[FILAS];

    //Variables Auxiliares
    float PromedioMyr;
    float PromedioAux;
    float Aux;

    Aux=0.0;
    PromedioMyr =0.0;
    PromedioAux = 0.0;

	// LLENADO DE MATRIZ
	
    //Primer Alumno
    Calificaciones[0][0] = 9.3;
    Calificaciones[0][1] = 8.7;
    Calificaciones[0][2] = 7.8;
    Calificaciones[0][3] = 9.8; // 8,9

    //Segundo Alumno
    Calificaciones[1][0] = 8.7; // 7.75
    Calificaciones[1][1] = 7.7;
    Calificaciones[1][2] = 7.8;
    Calificaciones[1][3] = 9.8;

    //Tercer Alumno
    Calificaciones[2][0] = 9.3; //9.37
    Calificaciones[2][1] = 9.8;
    Calificaciones[2][2] = 8.9;
    Calificaciones[2][3] = 9.5;


	// CALCULO DE MAYOR PROMEDIO 
    for(int f=0; f<FILAS; f++)
    {
        Aux = 0.0;
        for(int c=0; c<COLUMNAS; c++) // 1
        {

            Aux += Calificaciones[f][c];

        }
        PromedioAux = Aux/MATERIAS; // 1

        PromedioMyr = (PromedioAux>PromedioMyr) ? PromedioAux : PromedioMyr; // 2

        Promedios[f] = PromedioAux; // 3
    }

    //IMPRIMIR PROMEDIOS
    printf("\t\t\tlos promedios son\n");
    for(int c=0; c<FILAS; c++)
    {
        printf("\n%.2f", Promedios[c]);
    }

    printf("\nEl mayor promedio es de: %.2f", PromedioMyr);


    return 0;
}
