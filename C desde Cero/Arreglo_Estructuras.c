/*
                **** ARREGLO DE ESTRUCTURAS ****

    El presente código implementa el uso de arreglos de estructuras donde se simula que el arreglo es una "bolsita" que contiene
    N cartas.

    !! ACERCA DEL CÓDIGO !!
        * Enumeración : Enumerar las posiciones del béisbol
        * Tipo de Dato TARJETA : Para recoger las carácteristicas del mismo en la función principal
        * LLENADO DE CARTAS : Mediante un ciclo for para N cartas se piden los datos al usuario y estos son almacenados en buffer temporales
                              donde posteriormente son enviados como parámetros a LLenar_Tarjeta y el retorno de esta es almacenado en la
                              posición i del arreglo "bolsita de cartas".
        * llenar Tarjeta :  Función que recibe como parámetros los atributos de Tarjeta llenados en la función principal y regresa
                            una tarjeta (estructura) llena.
        * Muestra_Tarjeta : Recibe como parámetros los atributos de tarjeta e imprime el contenido de la misma.
        * Muestra_Posición : Imprime la posición del jugador a través de switch case y enums partiendo de la posición del jugador
                             recibida.

*/

//Inclusión de librerias
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Constantes a utilizar
#define CARACTERES 20
#define CANTIDADCARTAS 5

//Enumeracion
enum Posiciones{
    PITCHER = 1,
    CATCHER,
    PRIMERA_BASE,
    SEGUNDA_BASE,
    TERCERA_BASE,
    SHORTSTOP,
    JARDINERO_IZQIERDO,
    JARDINERO_CENTRAL,
    JARDINERO_DERECHO
};

//Creación del tipo de dato
struct Tarjeta{
    char Nombre[CARACTERES];
    int Posicion;
    int Numero;
    int HomeRuns;
    float PB;
    char Premios[CARACTERES];
    int Antiguedad;
};

//Hasta aqui

//Prototipado de funciones
//Tercera parte
struct Tarjeta Llenar_Tarjeta(
    char Nombre[CARACTERES],
    int Posicion,
    int Numero,
    int HomeRuns,
    float PB,
    char Premios[CARACTERES],
    int Antiguedad);

//Abre el sobre
void Muestra_Tarjetas(struct Tarjeta tjta);
void Muestra_Posicion(int Posicion);

//Segunda parte
int main()
{
    //Bolsita que contiene 5 cartas
    struct Tarjeta bolsita[CANTIDADCARTAS];

    //Buffer para leer datos del teclado

    char BNombre[CARACTERES];
    int BPosicion;
    int BNumero;
    int BHomeruns;
    float BPB;
    char BPremios[CARACTERES];
    int BAntiguedad;

    //LLENADO DE CARTAS
    printf("\t\t\t!!!Llenando las tarjetas!!!\n\n");
    for(int i=0; i<CANTIDADCARTAS; i++)
    {
        printf("Tarjeta %i", i+1);
        printf("\nNombre: ");
        fgets(BNombre, sizeof(BNombre), stdin);
        BNombre[strcspn(BNombre, "\n")] = 0;
        printf("Posicion: ");
        scanf("%d", &BPosicion);
        while(getchar() != '\n');
        printf("Numero: ");
        scanf("%d", &BNumero);
        while(getchar() != '\n');
        printf("Home Runs: ");
        scanf("%d", &BHomeruns);
        while(getchar() != '\n');
        printf("Promedio de bateo: ");
        scanf("%f", &BPB);
        while(getchar() != '\n');
        printf("Premio Obtenido: ");
        fgets(BPremios, sizeof(BPremios), stdin);
        BPremios[strcspn(BPremios, "\n")] = 0;
        printf("Anios activo: ");
        scanf("%d", &BAntiguedad);
        while(getchar() != '\n');
        printf("\n\n");

        //LLAMADO DE FUNCIÓN PARA LLENAR CARTA
        bolsita[i] = Llenar_Tarjeta(BNombre,BPosicion,BNumero,BHomeruns,BPB,BPremios,BAntiguedad);

    }

    //LIMPIAR PANTALLA
    system("cls");
    printf("\nAbriendo la bolsita.......");
    printf("\n\n\t\t\t!!!Tus Tarjetas!!!");

    //IMPRESIÓN DE CARTAS MEDIANTE LA FUNCIÓN
    for(int i=0; i<CANTIDADCARTAS; i++)
    {
        Muestra_Tarjetas(bolsita[i]);
    }
    return 0;
}

// FUNCIÓN PARA LLENAR CARTA
struct Tarjeta Llenar_Tarjeta(
    char Nombre[CARACTERES],
    int Posicion,
    int Numero,
    int HomeRuns,
    float PB,
    char Premios[CARACTERES],
    int Antiguedad)
{
        struct Tarjeta Nueva;

        strcpy(Nueva.Nombre, Nombre);
        Nueva.Posicion = Posicion;
        Nueva.Numero = Numero;
        Nueva.HomeRuns = HomeRuns;
        Nueva.PB = PB;
        strcpy(Nueva.Premios, Premios);
        Nueva.Antiguedad = Antiguedad;

        return Nueva;
}

//IMPRIMIR POSICIÓN
void Muestra_Posicion(int Posicion)
{
    switch(Posicion)
    {
        case PITCHER:
            printf(" Pitcher");
        break;
        case CATCHER:
            printf(" Catcher");
        break;
        case PRIMERA_BASE:
            printf(" Primera Base");
        break;
        case SEGUNDA_BASE:
            printf(" Segunda Base");
        break;
        case TERCERA_BASE:
            printf(" Tercera Base");
        break;
        case SHORTSTOP:
            printf(" ShortStop");
        break;
        case JARDINERO_IZQIERDO:
            printf(" Jardinero Izquierdo");
        break;
        case JARDINERO_CENTRAL:
            printf(" Jardinero Central");
        break;
        case JARDINERO_DERECHO:
            printf(" Jardinero Derecho");
        break;
        default:
            printf("\n Posicion no valido");
        break;
    }

}


//IMPRIMIR CARTAS
void Muestra_Tarjetas(struct Tarjeta tjta)
{
    printf("\n\n\n");
    printf("-------------------------------\n\n");
    printf("|Nombre: %s", tjta.Nombre);
    printf("\n|Posicion: ");
    Muestra_Posicion(tjta.Posicion);
    printf("\n|Numero: %i", tjta.Numero);
    printf("\n|HomeRuns: %i", tjta.HomeRuns);
    printf("\n|Promedio de Bateo: %.3f", tjta.PB);
    printf("\n|Premios: %s", tjta.Premios);
    printf("\n|Antiguedad: %i", tjta.Antiguedad);
    printf("\n|-------------------------------\n\n");
}
