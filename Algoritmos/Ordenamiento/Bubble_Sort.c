/*
        **** Ordenamiento mediante Algoritmo Bubble Sort ****

    El presente c�digo implementa el ordenamiento de un arreglo de numeros
    de tipo entero implementando el algoritmo Bubble Sort.

    Este algoritmo compara el valor de una posici�n con el valor de la siguiente
    y en caso de que sea mayor se hace un intercambio de posici�n de los valores
    de modo que los valores mas grandes estar�n bajando en la posici�n del arreglo.

*/

//Inclusi�n de librerias
#include <stdio.h>
#define TAMANO 10 //Constante para el tama�o del arreglo

//Prototipado de funciones
void Bubble_Sort(int Arreglo[TAMANO]);
void Imprime_Arreglo(int Arreglo[TAMANO]);

//Funci�n principal
int main()
{
    int Arreglo[TAMANO] = {7, 3, 9, 11, 1, 16, 4, 14, 2, 10}; // Declaraci�n del arreglo
    //Impresion del arreglo original
    printf("Arreglo original: ");
    Imprime_Arreglo(Arreglo);
    //Mandamos llamar la funci�n donde se implementa el algoritmo
    Bubble_Sort(Arreglo);

    return 0; //Fin del programa
}

//Implementaci�n de algoritmo
void Bubble_Sort(int Arreglo[TAMANO])
{
    int Buffer; //Buffer auxiliar para almacenar el numero menor

    for(int j=0; j<TAMANO-1; j++) // Controla las vueltas que dar�
    {
            for(int i=0; i<TAMANO-j - 1; i++) //Compara los valores  uno por uno
            {
                if(Arreglo[i] > Arreglo[i+1]) //Si es mayor al siguiente n�mero hace intercambio de valores
                {
                    Buffer = Arreglo[i];
                    Arreglo[i] = Arreglo[i+1];
                    Arreglo[i+1] = Buffer;
                }
            }
    }
    //Impresi�n de resultados
    printf("\nArreglo ordenado: ");
    Imprime_Arreglo(Arreglo);
}

//Funci�n para imprimir arreglo
void Imprime_Arreglo(int Arreglo[TAMANO])
{
    //Impresi�n de valores acorde a su posici�n en el arreglo
    for(int i=0; i<TAMANO; i++)
    {
        printf("%i, ", Arreglo[i]);
    }
}
