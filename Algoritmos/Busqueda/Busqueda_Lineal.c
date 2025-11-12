/*
                    **** BUSQUEDA LINEAL (SECUENCIAL) ****
        El presente código implementa la búsqueda lineal de un número en un arreglo
        de números enteros.
        La búsqueda se realiza utilizando un ciclo for el cual recorrerá los elementos
        del arreglo y comparará el número a buscar con el de la iteración del arreglo.
        se utiliza una variable auxiliar para almacenar la posición donde se encuentra
        el número en el arreglo. Se inicializa con -1 dado que si se hace con 0 esta es
        una posición válida del arreglo de números.
*/
//Inclusión de librerias
#include <stdio.h>

//Prototipado de función de búsqueda lineal
void Busqueda_Lineal(int Arreglo[], int Tamano, int Numero);

int main()
{
    //Declaración del arreglo
    int Arreglo[] = {5, 7, 1, 3, 8, 16, 2, 6, 2, 4};

    int Tamano;
    int Numero;

    //Cáculo del tamaño del arreglo
    Tamano = sizeof(Arreglo) / sizeof(Arreglo[0]);

    //Pedir número a buscar
    printf("Ingresa el numero que deseas buscar en el arreglo: ");
    scanf("%i", &Numero);

    //Aplica la busqueda
    Busqueda_Lineal(Arreglo, Tamano, Numero);

    return 0;
}

//Búsqueda
void Busqueda_Lineal(int Arreglo[], int Tamano, int Numero)
{
    printf("\nBuscando numero de linealmente.....");

    //Variable para almacenar la posición del número en el arreglo
    int Busqueda;
    Busqueda = -1;

    for(int i=0; i<Tamano; i++)
    {
        if(Arreglo[i] == Numero)
        {
            Busqueda = i;
        }
    }

    if(Busqueda != -1 )
    {
        printf("\nNumero encontrado en la posicion: %i",Busqueda);
    }
    else{
        printf("\nNumero no encontrado.");
    }

}
