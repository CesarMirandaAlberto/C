/*
			**** ALGORITMO SELECTION SORT ****
			
	El presente código implementa ordenamiento de un arreglo de datos enteros implementando el algoritmos de ordenamiento Selection Sort
	
	Funcionamiento del algoritmo:
	1.- Partemos buscando el elemento mas pequeño del arreglo y lo movemos a la primer posición
	2.- Luego, se repite el proceso con los elementos faltantes y se colocan en ordne
	3.- El arreglo se ordena uno por uno hasta terminar.
	
*/

//Inclusión de librerias
#include <stdio.h>

//Tamaño del arreglo
#define TAMANO 10

//Prototipado de funciones
void Imprimir_Arreglo(int Arreglo[TAMANO]);
void Selection_Sort(int Arreglo[TAMANO]);

int main()
{
	// Declaración del arreglo original
    int Arreglo[TAMANO] = {3, 14, 4, 1, 7, 9, 2, 10, 5, 8};

	// Imprimir arreglo original
    printf("Arreglo original\n\n");
    Imprimir_Arreglo(Arreglo);

	// Aplicar algoritmo selection sort
    printf("\n\nImplementado Selection Sort...\n");
    Selection_Sort(Arreglo); 

    return 0;
}

//Implementación de algoritmo
void Selection_Sort(int Arreglo[TAMANO])
{
    int PosicionMinimo; // Para determinar donde se encuentra el valor minimo
    int buffer; 		// Variable temporal para hacer intercambio de numeros

    for(int i=0; i<TAMANO; i++)
    {
        PosicionMinimo = i; 
		//Buscar el valor minimo en el resto de los elementos del arreglo
        for(int j=i+1; j<TAMANO; j++) 
        {
            if(Arreglo[j] < Arreglo[PosicionMinimo])
            {
                PosicionMinimo = j; 
            }
        }
		// Intercambiar el valor minimo con el valor en la posición actual
        buffer= Arreglo[i]; 
        Arreglo[i] = Arreglo[PosicionMinimo];
        Arreglo[PosicionMinimo] = buffer;

    }

    printf("\nArreglo ordenado\n");
    Imprimir_Arreglo(Arreglo); // Impresión de resultados

}

void Imprimir_Arreglo(int Arreglo[TAMANO])
{
    printf("|");

    for(int i=0; i<TAMANO; i++)
    {
        printf(" %i|", Arreglo[i]);
    }
}
