/*
										**** ALGORITMO INSERTION SORT ****
			
		El presente código implementa el ordenamiento de un arreglo de 10 elementos de tipo int
		utilizano el algoritmos Insertion Sort.
	
		El algoritmo funciona de la siguiente manera:
		1.- Partiendo que el primer elemento del arreglo esta "ordenado" se comienza desde el segundo elemento
		2.- el segundo elemento es comparado con el primero y si el segundo elemento es menor intercambian posiciones
		3.- posteriormente el siguiente elemento es comparado con los anteriores y se repite el procedimiento se hacen
		4.- cambio de posiciones si es necesario.
	
*/

//Inclusión de librerias
#include <stdio.h>

#define TAMANO 10 // Tamaño del arreglo

//Prototipado de funciones
void Insertion_Sort(int Arreglo[TAMANO]);
void Imprime_Arreglo(int Arreglo[TAMANO]);

int main ()
{
	//Declaración de arreglo
    int Arreglo[TAMANO] = {8, 3, 12, 1, 11, 9, 5, 4, 2, 7};

    printf("Arreglo original\n");
    Imprime_Arreglo(Arreglo);
	
	//Implementación del algoritmo 
    printf("\nImplementando algoritmo.....\n");
    Insertion_Sort(Arreglo); 
    return 0;
}

//Implementación de algoritmo
void Insertion_Sort(int Arreglo[TAMANO])
{
	//Ciclo for para las posiciones del arreglo
    for(int i=0; i<TAMANO; i++)
    {
        int Buffer = Arreglo[i]; 
        int j= i-1; 

        while(j>=0 && Arreglo[j]> Buffer)
        {
            Arreglo[j+1] = Arreglo[j]; 
            j = j-1; 
        }
        Arreglo[j+1] = Buffer;
    }


    Imprime_Arreglo(Arreglo); 
}

//Impresión de resultados
void Imprime_Arreglo(int Arreglo[TAMANO])
{
    printf("|");
    for(int i=0; i<TAMANO; i++)
    {
        printf("%i | ", Arreglo[i]);
    }
}

