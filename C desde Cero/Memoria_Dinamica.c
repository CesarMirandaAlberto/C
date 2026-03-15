/*
                                            **** MEMORIA DINÁMICA ****

        El presente código implementa el uso de memoria dínámica a la par con arreglo de estructuras de datos, donde se simula
        comprar un lote de boletos de autobus. El código esta dividido en diferentes FUNCIONES:

        * Generar_Boleto: Recibe como parámetros los atributos del tipo de dato boleto y los asigna a una estructura local la cual retorna.
        * Imprimir_Boleto :  Recibe como parámetro la estructura con los atributos de boleto y los imprime.
        * Imprimir_Boletos : Mediante un ciclo for se manda llamar N veces (total de boletos a comprar) la función Imprimir_Boleto para imprimir
        todos los boletos comprados.
        * Liberar_Memoria : A través de la función free se libera el espacio de memoria utilizado una vez que se termina de tulizar, esto se
        FUNCIÓN PRINCIPAL :
            Declara el arreglo de estructuras y reserva la memoria necesaria mediante la función malloc.
            ASIGNACIÓN DE VALORES A ESTRUCTURA : Se llenan los datos de las estructuras desde el código y posteriormente se envian como parámetros
            a Generar_Boleto.
            Boleto Extra : Pregunta al usuario si requiere un boleto extra, en caso de que si se modifica el tamaño del arreglo de estructuras para
            almacenar un extra y se llena la información del boleto faltante y se repite el proceso.
            Para cualquiera de los casos se libera le memoria ocupada por el arrello.
            Se imprime en consola los boletos creados.

*/
// INCLUSIÓN DE LIBRERIAS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//DEFINICIÓN DE CONSTANTES
#define CARACTERES 50

// ENUMERACIÓN DE OPCIONES
enum BoletoExtra{
    SI = 1,
    NO
};

// DEFINICIÓN DE TIPO DE DATO CON SUS CARÁCTERISTICAS
typedef struct {
    char* Nombre;
    char* Ruta;
    int Asiento;
    int Hora;
    float Costo;
} Boleto;

/*
 Nombre[CARACTERES] Arreglo fijo y no permite modificaciones
 char* Nombre Puntero dinamico que permite modificar tamano
*/

// PROTOTIPADO DE FUNCIONES
Boleto* Generar_Boleto(
    const char* Nombre,
    const char* Ruta,
    int Asiento,
    int Hora,
    float Costo);

void Imprimir_Boleto(Boleto* UnBoleto);
void Imprimir_Boletos(Boleto** UnBoleto, int contador);
void Liberar_Memoria(Boleto** UnBoleto, int cantidad);

//FUNCIÓN PRINCIPAL
int main()
{
   // Boleto UnBoleto;

    //printf("Peso del boleto vacio: %zu",sizeof(UnBoleto));

    // DEFINICIÓN DE VARIABLES
    Boleto** Reservame;
    int op;
    int Extra;
    int APARTAME;
    APARTAME = 3;
    Extra = 1;


    // ARREGLO DE ESTRUCTURAS
    Reservame = (Boleto**) malloc(sizeof(Boleto*)*APARTAME);

    // ASIGNACIÓN DE VALORES EN LAS POSICIONES DEL ARREGLO
    Reservame[0] = Generar_Boleto("Anonimo 1", "GDL-GTO", 12,1840, 682.91);
    Reservame[1] = Generar_Boleto("Anonimo 2", "GDL-GTO",13,1840, 682.91);
    Reservame[2] = Generar_Boleto("Anonimo 3", "GDL-GTO",14 ,1840, 682.91);

    printf("Haz reservado tres boletos.");
    printf("\nDeseas Reservar otro boleto? 1.- SI 2.-No: ");
    scanf("%i",&op);


    // SE REQUIERE OTRO BOLETO
    if(op==SI)
    {
        // MODIFICACIÓN DEL TAMAÑO DEL ARREGLO DE ESTRUCTURAS
        Boleto** Buffer;

        APARTAME++;
        Buffer = realloc(Reservame,sizeof(Boleto*)*APARTAME);

        Reservame = Buffer;
        Reservame[APARTAME-1] = Generar_Boleto("Anonimo 4", "GDL-GTO",15 ,1840, 682.91);

        printf("\n!Boleto extra agregado!");
        printf("\t\tTus Boletos\n\n");
        Imprimir_Boletos(Reservame, APARTAME);

        printf("\n!Gracias por viajar con nosotros");
        //LIBERACIÓN DE MEMORIA
        Liberar_Memoria(Reservame,APARTAME);
        Reservame = NULL;
        if (Reservame == NULL)
        {
            printf("\nTus Boletos ya no son validos.\n");
        }

    }
    else{
            //IMPRESIÓN DE BOLETOS
        printf("\t\tBoletos comprados correctamente\n\n");

       Imprimir_Boletos(Reservame, APARTAME);

       printf("\n\n!Gracias por viajar con nosotros");
       Liberar_Memoria(Reservame,APARTAME); //LIBERAR MEMORIA
       Reservame = NULL; //No apunta a nada

        if (Reservame == NULL)
        {
            printf("\n\n!Tus Boletos ya no son validos!.\n");
        }


    }
    return 0;
}

// IMPLEMENTACIÓN DE FUNCIONES
Boleto* Generar_Boleto(
    const char* Nombre,
    const char* Ruta,
    int Asiento,
    int Hora,
    float Costo)
{

    Boleto* UnBoleto; //APUNTANDO A ESTRUCTURA
    //APARTAME UN BOLETO CON LAS CARÁCTERISTICAS DE LA ESTRUCTURA
    UnBoleto = (Boleto*) malloc(sizeof(Boleto));

    //VECTOR DINÁMICO DE TIPO CHAR CON LA LOGITUD DEL TIPO DE DATOS
    UnBoleto->Nombre = (char*) malloc(sizeof(char)* CARACTERES);
    UnBoleto->Ruta = (char*) malloc(sizeof(char)* CARACTERES);

    //ASIGNACIÓN DE DATOS
    strcpy(UnBoleto->Nombre, Nombre);
    strcpy(UnBoleto->Ruta, Ruta);
    UnBoleto->Asiento = Asiento;
    UnBoleto->Hora = Hora;
    UnBoleto->Costo = Costo;

    //RETORNA LA ESTRUCTURA CON LOS DATOS ASIGNADOS
    return UnBoleto;
}


void Imprimir_Boleto(Boleto* UnBoleto)
{
    printf("\n******************");
    printf("\n|Nombre: %s", UnBoleto->Nombre);
    printf("\n|Ruta: %s", UnBoleto->Ruta);
    printf("\n|Asiento: %i", UnBoleto->Asiento);
    printf("\n|Hora: %i", UnBoleto->Hora);
    printf("\n|Costo: %.2f", UnBoleto->Costo);
    printf("\n|*****************");
}

void Imprimir_Boletos(Boleto** UnBoleto, int contador)
{
    for(int i=0; i<contador; i++)
    {
        Imprimir_Boleto(UnBoleto[i]);
    }
}


void Liberar_Memoria(Boleto** UnBoleto, int cantidad)
{
    for(int i=0; i< cantidad; i++)
    {
        free(UnBoleto[i]->Nombre);
        free(UnBoleto[i]->Ruta);
        free(UnBoleto[i]);
    }

    free(UnBoleto);

}
