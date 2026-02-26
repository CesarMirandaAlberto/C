/*
						**** ARREGLOS BIDIMENSIONALES ****

	El presente código implementa el uso de arreglos bidimensionales (matrices) el
	código simula el llenado de una lista de calificaciones.
	
	ENUMERACION DE MATERIAS : Se enumeran las materias para tener un control y posteriormente
	mediante las iteraciones en las matrices se llenan 
	
	LLENADO DE MATRIZ : Mediante 2 ciclos for anidados se llenan las posiciones 
	Primer Bucle : Itera las filas 
	Segundo Bucle: Intera las columnas al mismo tiempo que se se compara el iterador con las
	Materias de ENUM y se imprime en consola la materia que se esta llenando.
	
	Mediante scanf se lee del teclado el valor ingresado y se ingresa en las codernadas de la matriz
	
	IMPRESION DE DATOS :
	Mediante ciclos for se imprime la matriz llena.
*/
#include <stdio.h>

//Dimensiones de la matriz
#define FILAS 3
#define COLUMNAS 4

// ENUMERACION DE MATERIAS
enum Materias{
    PROGRAMACION,
    ELECTRONICA,
    SENALES,
    EMBEBIDOS

};

// Función principal
int main()
{
	//DECLARACIÓN DE MATRIZ
    float Calificaciones[FILAS][COLUMNAS];

    //Llenado de matriz mediante cordenadas x,y donde x=filas(f), y= columnas(c)
    for(int f=0; f<FILAS; f++)
    {
        printf("Ingresa las calificaciones del alumno %i", f+1);
        for(int c=0; c<COLUMNAS; c++)
        {
            if(c == PROGRAMACION)
            {
                printf("\nProgramacion: ");
            }
                else if(c == ELECTRONICA)
                {
                    printf("\nElectronica: ");
                }
                else if(c == SENALES)
                {
                    printf("\nSenales: ");
                }
                else if(c == EMBEBIDOS)
                {
                    printf("\nEmbebidos: ");
                }
            scanf("%f", &Calificaciones[f][c]);
        }

    }

    // IMPRESION DE DATOS
		printf("\nNo Lista  Programacion  Electronica   Senales     Embebidos\n");

    for(int f=0; f<FILAS; f++)  
    {
        printf("%i", f+1); //Numero de lista
        for(int c=0; c<COLUMNAS; c++ )
        {
             printf("\t|%.1f\t|", Calificaciones[f][c]);
        }
        printf("\n");
    }


    return 0; // Fin del programa
}
