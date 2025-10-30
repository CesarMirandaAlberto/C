/*
				**** ALGORITMO MERGE SORT ****
	El presente código implementa el algoritmo merge sort para ordenar los elementos de un 
	arreglo.
	El algoritmo esta dividido en dos partes:
	
	Merge_Sort: Encargada de dividir el arreglo en partes partiendo de encontrar la mitad del arreglo y 
				aplicando recursión los divide.
	Merge: Cumple diferentes funciones 
		   1. Empenzado con calcular la cantidad de elementos de cada mitad
			  y dichos elementos son almacenados en buffers temporales.
		   2.- Mezcla los elementos de las mitades obtenidas ordenando los elementos acorde a su valor
		   
*/

//Inclusión de libreria
#include <stdio.h>

//Prototipado de funciones
void Imprime_Arreglo(int Arreglo[], int Tamano);

void Merge_Sort(int Arreglo[], int MIzquierda, int MDerecha);
void Merge(int Arreglo[], int MIzquierda, int Mitad, int MDerecha);

int main()
{
	//Declaración del arreglo
    int Arreglo[] = {5, 4, 14, 16, 7, 3, 9, 8, 11, 2};

    int Tamano = sizeof(Arreglo) / sizeof(Arreglo[0]); // Calcula el tamaño del arreglo

    int Ultimo;
    int Primero;

    //Calculo de pocisiones de los elementos del vector
    Primero= 0;
    Ultimo = Tamano -1;

    printf("Arreglo original\n");
    Imprime_Arreglo(Arreglo, Tamano);


    printf("\n Implementando merge sort....\n");
    Merge_Sort(Arreglo, Primero, Ultimo);
    Imprime_Arreglo(Arreglo, Tamano);

    return 0;
}
//Imprime el arreglo
void Imprime_Arreglo(int Arreglo[], int Tamano)
{
    printf("|");
    for (int i = 0; i < Tamano; i++)
    {
        printf("%i|", Arreglo[i]);
    }
    printf("\n");
}

void Merge_Sort(int Arreglo[], int MIzquierda, int MDerecha)
{
    if(MIzquierda < MDerecha)
    {

        int Mitad;
		
		//Calcula el indce de la mitad de los arreglos divididos
        Mitad = MIzquierda + (MDerecha - MIzquierda)/2;

        //Aplica recursión para ordenar las mitades

       Merge_Sort(Arreglo, MIzquierda, Mitad);
       Merge_Sort(Arreglo, Mitad + 1, MDerecha);

       //Unir las mitades
      Merge(Arreglo, MIzquierda, Mitad, MDerecha);
    }

}
//Mezclar mitades divididas
void Merge(int Arreglo[], int MIzquierda, int Mitad, int MDerecha)
{
	//Cálculo de los elementos que tendrá cada mitad
    int PosDerecha;
    int PosIzquierda;

    PosIzquierda = Mitad - MIzquierda +1;
    PosDerecha = MDerecha - Mitad;

    //Buffers para almacenar los elementos acorde a la parte que corresponden
    int Derecha[PosDerecha];
    int Izquierda[PosIzquierda];

    // Copias elementos a los buffer
    for(int i=0; i<PosIzquierda; i++)
    {
        Izquierda[i] = Arreglo[MIzquierda + i];
    }

    for(int j=0; j<PosDerecha; j++)
    {
        Derecha[j] = Arreglo[Mitad + 1 + j];
    }


    int i=0;
    int j=0;
    int k = MIzquierda;

    //Mezclar los arreglos en el arreglo original
    while(i<PosIzquierda && j<PosDerecha)
    {
        if(Izquierda[i] <= Derecha[j])
        {
            Arreglo[k] = Izquierda[i];
            i++;
        }
        else{
            Arreglo[k] = Derecha[j];
            j++;
        }
        k++;
    }

    // Si faltan elementos hay que copiarlos
    while(i < PosIzquierda)
    {
        Arreglo[k] = Izquierda[i];
        i++;
        k++;
    }

    while(j < PosDerecha)
    {
        Arreglo[k] = Derecha[j];
        j++;
        k++;
    }
}
