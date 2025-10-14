/*
        **** Ordenamiento mediante Algoritmo Bubble Sort ****

    El presente código implementa el ordenamiento de un arreglo de numeros
    de tipo entero implementando el algoritmo Bubble Sort.

    Este algoritmo compara el valor de una posición con el valor de la siguiente
    y en caso de que sea mayor se hace un intercambio de posición de los valores
    de modo que los valores mas grandes estarán bajando en la posición del arreglo.

*/

//Inclusión de librerias
#include <stdio.h>
#define TAMANO 10 //Constante para el tamaño del arreglo

//Prototipado de funciones
void Bubble_Sort(int Arreglo[TAMANO]);
void Imprime_Arreglo(int Arreglo[TAMANO]);

//Función principal
int main()
{
    int Arreglo[TAMANO] = {7, 3, 9, 11, 1, 16, 4, 14, 2, 10}; // Declaración del arreglo
    //Impresion del arreglo original
    printf("Arreglo original: ");
    Imprime_Arreglo(Arreglo);
    //Mandamos llamar la función donde se implementa el algoritmo
    Bubble_Sort(Arreglo);

    return 0; //Fin del programa
}

//Implementación de algoritmo
void Bubble_Sort(int Arreglo[TAMANO])
{
    int Buffer; //Buffer auxiliar para almacenar el numero menor

    for(int j=0; j<TAMANO-1; j++) // Controla las vueltas que dará
    {
            for(int i=0; i<TAMANO-j - 1; i++) //Compara los valores  uno por uno
            {
                if(Arreglo[i] > Arreglo[i+1]) //Si es mayor al siguiente número hace intercambio de valores
                {
                    Buffer = Arreglo[i];
                    Arreglo[i] = Arreglo[i+1];
                    Arreglo[i+1] = Buffer;
                }
            }
    }
    //Impresión de resultados
    printf("\nArreglo ordenado: ");
    Imprime_Arreglo(Arreglo);
}

//Función para imprimir arreglo
void Imprime_Arreglo(int Arreglo[TAMANO])
{
    //Impresión de valores acorde a su posición en el arreglo
    for(int i=0; i<TAMANO; i++)
    {
        printf("%i, ", Arreglo[i]);
    }
}
