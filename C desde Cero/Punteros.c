/*
                                    **** PUNTEROS ****

    El presente código implementa el uso de punteros a tipos de datos enteros.

    !! ACERCA DEL CÓDIGO !!
    Se implementan los punteros antes mencionados y posteriormente se imprime en consola la
    dirección de memoria de las variables enteras previamente creadas ademas del valor que contienen
    dichas drecciones, posteriomente mediante el uso de los punteros se modifica el valor de las variables.

*/

// INCLUSIÓN DE LIBRERIAS
#include <stdio.h>
#include <stdlib.h>

// FUNCIÓN PRINCIPAL
int main()
{
    // VARIABLES ENTERAS
    int Numero1;
    int Numero2;

    Numero1 = 6;
    Numero2 = 12;

    //APUNTADORES A TIPOS DE DATOS ENTEROS
    int *Apuntaa = NULL;
    int *Apuntaa2 = NULL;

    //APUNTADORES A VARIABLES DECLARADAS
    Apuntaa =&Numero1;
    Apuntaa2 = &Numero2;

    //IPRESIÓN DE DATOS
    printf("Numero 1: %i", Numero1);
    printf("\nUbicado en la direccion de memoria: %p", Apuntaa);
    printf("\nImprimiendo desde el apuntador: %i", *Apuntaa);

    printf("\nNumero 2: %i", Numero2);
    printf("\nUbicado en la direccion de memoria: %p", Apuntaa2);
    printf("\nImprimiendo desde el apuntador: %i", *Apuntaa2);

    // MODIFICACIÓN DE VALORES
    *Apuntaa =1;
    *Apuntaa2= 14;

    // RESULTADOS
    printf("\n\n!!Actualizacion !!");
    printf("\n Numero 1: %i", Numero1);
    printf("\n Numero 2: %i", Numero2);

    return 0; // FIN DEL PROGRAMA
}
