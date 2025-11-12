/*
                **** ALGORITMO QUICK SORT ****

    El presente código implementa el algoritmo Quick Sort para ordenar los elementos de un arreglo con tamaño
    de 10 elementos de tipo entero:
    El algoritmo funciona de la siguiente forma:
    * Se cálcula el tamaño, posicion inicial y final de los elementos del arreglo.
    * Pivote: Se escoge cualquier elemento el cual será el pivote para este caso se escoge el elemento de enmedio,
    * Mitades a lado del pivote:
        Izquierda : Elementos menores
        Derecha: Elementos mayores
    * Indices: Recorren los elementos de las mitades
    * Comparaciones y Buffer
        Se realizan comparaciones entre los elementos de los sub-arreglos izquierdo y derecho
        Se utiliza un buffer temporal para almacenar el elemento si es menor

    * Recursion: Se implementa recursión del algoritmo para ordenar
*/
#include <stdio.h>

void Imprimir_Arreglo(int Arreglo[], int Tamano);
void Quick_Sort(int Arreglo[], int Inicio, int Fin);

int main()
{
    int Arreglo[] = {7, 8, 11, 2, 6, 16, 9 , 1, 4, 14};
    int Tamano = sizeof(Arreglo)/ sizeof(Arreglo[0]);

    int Primer = 0;
    int Ultimo = Tamano-1;

    printf("Arreglo original \n");
    Imprimir_Arreglo(Arreglo, Tamano);


    //Implementación algoritmos
    printf("\nAplicado Algoritmo.....\n");
    Quick_Sort(Arreglo,Primer, Ultimo);
    Imprimir_Arreglo(Arreglo, Tamano);

    return 0;
}

void Imprimir_Arreglo(int Arreglo[], int Tamano)
{
    printf("|");

    for(int i=0; i<Tamano; i++)
    {
        printf("%i|", Arreglo[i]);
    }
}

void Quick_Sort(int Arreglo[], int Inicio, int Fin)
{
    int Pivote;
    int Buffer;

    //Indices
    int Izquierda;
    int Derecha;

    // Asignación de posiciones
    Izquierda = Inicio;
    Derecha = Fin;
    Pivote = Arreglo [Inicio +(Fin - Inicio)/2];

    while(Izquierda<=Derecha) // (No desaparesca el sub-arreglo derecho)
    {


        while(Arreglo[Izquierda] < Pivote) // Incrementa el iterador de los elementos del sub-arreglo izquierdo
        {
            Izquierda++;
        }
        while(Arreglo[Derecha] > Pivote) // Disminuye el iterador de los elementos del sub-arreglo derecho
        {
            Derecha--;
        }

        if(Izquierda <= Derecha) // Mientras la mitad izquierda sea mas chica que la derecha
        {
            Buffer = Arreglo[Izquierda];
            Arreglo[Izquierda] = Arreglo[Derecha];
            Arreglo[Derecha] = Buffer;

            Izquierda++;
            Derecha--;
        }
    }

    //Aplicar recursión para ordenar mitades
    if(Inicio < Derecha)
    {
        Quick_Sort(Arreglo, Inicio, Derecha);
    }
    if(Izquierda < Fin)
    {
        Quick_Sort(Arreglo, Izquierda, Fin);
    }
}
