/*
                    **** ALGORITMO DE BUSQUEDA BINARIA ****
        El presente código implemementa el algoritmo de búsqueda binaria aplicado a un arreglo de 10 elementos
        * Funcionamiento:
          Para que el algoritmo pueda funcionar se parte de que el arreglo al que se quiere aplicar esta ordenado
          de menor a mayor.
          El arreglo se divide en dos mitades Mayor(derecha) y Menor(izquierda) con respecto al elemento de enmedio del arreglo
          1.- Comparaciones:
              Si el número a buscar es menor al elemento de enmedio se ignora la mitad Derecha
              si es mayor se ignora la mitad izquierda y solo se hacen comparaciones con la mitad que no se ignoró
          2. Inicio y Fin:
              Son indices que delimitan el inicio de la mitad izquierda y fin de la mitad derecha (primer y último elemento del arreglo)
              dependiendo de la mitad que se escogio el indice aumentará(derecha) o decrementará(izquierda)
          3.- Bandera
              Si se encuentra el número la posición del mismo es asignada a la bandera para mostrarse en consola, esta se inicializa con -1 debido
              a que 0 es posición valida del arreglo.

*/

//Inclusión de libreria
#include <stdio.h>

//Prototipado de funciones
void Busqueda_Binaria(int Arreglo[], int Tamano, int Numero);

//Función principal
int main()
{
    //Declaración del arreglo
    int Arreglo[] = {1, 4, 7, 9, 11, 14, 16, 21, 23, 25};

    int Tamano;
    int Numero;

    //Cálculo del tamaño del arreglo
    Tamano = sizeof(Arreglo) / sizeof(Arreglo[0]);



    printf("Ingresa el numero a buscar: ");
    scanf("%i", &Numero);

    printf("\nAplicando busqueda binaria.....\n");
    Busqueda_Binaria(Arreglo, Tamano, Numero);
    return 0;
}

//Aplicación de busqueda binaria
void Busqueda_Binaria(int Arreglo[], int Tamano, int Numero)
{
    //Indices
    int Inicio;
    int Fin;
    int Mitad;
    int Bandera;

    //Inicialización
    Inicio= 0;
    Fin = Tamano - 1;
    Bandera = -1;


    while(Inicio <= Fin)
    {
        Mitad = Inicio + (Fin - Inicio)/2;
        if(Arreglo[Mitad] == Numero)
        {
            Bandera = Mitad;
            break; //Frena el ciclo
        }
        else if (Arreglo[Mitad] < Numero)
        {
            Inicio = Mitad + 1;
        }
        else{
            Fin = Mitad - 1;
        }
    }

    //Impresión de resultados
    if(Bandera != -1)
    {
        printf("\nElemento encontrado en la posicion: %i", Bandera);
    }
    else{
        printf("Elemento no encontrado\n");
    }
}
