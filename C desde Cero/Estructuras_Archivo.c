/*
                                                **** MANIPULACIÓN DE ARCHIVOS ****

    El presente código implementa el uso de manipulación de archivos utilizando estructuras de datos.
    se simula que se compra boletos de autobus donde los datos del mismo se ingresan desde el teclado y posteriormente
    son almacenados en un archivo binario, posteriormente si se requiere imprimir el boleto en consola se solicita el
    id al usuario mediante consola y mediante ese se realiza una busqueda dentro del archivo de los boletos, el código esta
    dividido en múltiples funciones:

    * Menu_Opciones : Menú principal que solicita al usuario escoger una de las opciones disponibles
    * Generar_Boleto : Recibe como parámetros los datos inidividuales de los boletos y los asigna a la estructura la cual regresa completamente llena
    * LLenar_Boleto : Solicita al usuario ingresar los datos desde el teclado para posteriormente enviarlos como parámetros a Generar_Boleto al mismo tiempo que envia el boleto lleno a guardar en archivo
    * GuardaEn_Archivo : Recibe la estructura de llenar boleto, abre o crea el archivo de los boletos y guarda los datos
    * Buscar_Boleto : Recibe el id del boleto a buscar y posteriormente abre el archivo y realiza una búsqueda del id si se encuentra se imprime en consola el boleto
    * Mostrar_Boleto : Imprime en consola el boleto pasado como parámetro de la búsqueda del mismo
    * Generador_Costo : Se genera un valor aleatorio para simular el precio del boleto mediante la función rand
    * Lee_Archivo : Abre el archivo de los boletos para leer el mismo.


*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

//INCLUSIÓN DE LIBRERIAS
#define NOMBREARCHIVO "Boletos.bin"
#define CARACTERES 20
#define IMPUESTO 0.16

//ENUMERACIÓN DE OPCIONES DEL MENU
enum Opciones{
    Comprar=1,
    Buscar,
    Salir
};

//DEFINICIÓN DEL TIPO DE DATO CON SUS ATRIBUTOS
typedef struct{
    char Nombre [CARACTERES];
    char Origen[CARACTERES];
    char Destino[CARACTERES];
    int Id;
    int Hora;
    int Asiento;
    float Costo;
} Boleto;

// PROTOTIPADO DE FUNCIONES
void Menu_Opciones(void);

Boleto Generar_Boleto(
    char Nombre[CARACTERES],
    char Origen[CARACTERES],
    char Destino[CARACTERES],
    int Id,
    int Hora,
    int Asiento,
    float Costo);

void LLenar_Boleto(void);
void Buscar_Boleto(void);
void Mostrar_Boleto(Boleto* UnBoleto);
float Generador_Costo(void);

int GuardaEn_Archivo(Boleto Apartame);
Boleto* Lee_Archivo(int Id);

//FUNCIÓN PRINCIPAL
int main()
{

    Menu_Opciones();

    return 0;
}

// IMPLEMENTACIÓN DE FUNCIONES
void Menu_Opciones(void)
{
    int Opcion;

    //OPCIONES EN EL MENÚ
    printf("\t\t\t!Tu linea de viajes!!");
    printf("\nSelecciona una opcion");
    printf("\n 1.- Comprar Boleto  ");
    printf("\n 2.- Buscar boleto ");
    printf("\n 3.- Salir");
    printf("\n: ");
    scanf("%d", &Opcion);

    //SELECCIÓN DE OPCION
    switch(Opcion)
    {
        case Comprar:
            LLenar_Boleto();
        break;
        case Buscar:
            Buscar_Boleto();
        break;
        case Salir:
            exit(0);
        break;
        default:
            printf("\n!!Opcion Incorrecta!!");
        break;
    }
}

float Generador_Costo(void)
{
    //DEFINICIÓN DE VARIABLES
    float CostoFinal;
    float CostoParcial;
    float MasImpuesto;

    // CALCULO DE COSTO
    srand(time(NULL));

    CostoParcial = rand() %(1400 - 450+1) + 450;
    CostoParcial = (float)CostoParcial;

    MasImpuesto = CostoParcial * IMPUESTO;

    CostoFinal = CostoParcial + MasImpuesto;

    return CostoFinal;
}


Boleto Generar_Boleto(
    char Nombre[CARACTERES],
    char Origen[CARACTERES],
    char Destino[CARACTERES],
    int Id,
    int Hora,
    int Asiento,
    float Costo)
{
    // DEFINICIÓN DE LA ESTRUCTURA
    Boleto UnBoleto;

    // ASIGNACIÓN DE VALORES
    strcpy(UnBoleto.Nombre, Nombre);
    strcpy(UnBoleto.Origen, Origen);
    strcpy(UnBoleto.Destino, Destino);
    UnBoleto.Id = Id;
    UnBoleto.Hora = Hora;
    UnBoleto.Asiento = Asiento;
    UnBoleto.Costo = Costo;


    return UnBoleto; // ESTRUCTURA CON LOS VALORES
}


void LLenar_Boleto(void)
{
    //LLENADO DE DATOS DE LOS BOLETOS
    int Cantidad;

    char BNombre[CARACTERES];
    char BOrigen[CARACTERES];
    char BDestino[CARACTERES];
    int BId;
    int BHora;
    int BAsiento;
    float BCosto;


    printf("\nCuantos boletos necesitas?:");
    scanf("%d", &Cantidad);
    getchar();

    //RESERVACIÓN DE MEMORIAS
    Boleto* Apartame = (Boleto*) malloc(Cantidad * sizeof(Boleto));

    BCosto = Generador_Costo();

    //LLENADO DE DATOS DESDE EL TECLADO
    for(int i=0; i<Cantidad; i++)
    {
        printf("Boleto %i", &Cantidad);
        printf("\nIngresa el nombre: ");
        fflush(stdin); //Limpia el buffer
        fgets(BNombre, sizeof(BNombre), stdin); /
        BNombre[strcspn(BNombre, "\n")] = 0;
        printf("\nIngresa el origen de salida: ");
        fflush(stdin);
        fgets(BOrigen, sizeof(BOrigen), stdin);
        BOrigen[strcspn(BOrigen, "\n")] = 0;
        printf("\nIngresar tu destino: ");
        fflush(stdin);
        fgets(BDestino, sizeof(BDestino), stdin);
        BDestino[strcspn(BDestino, "\n")] = 0;
        BId = i+1;
        printf("\nIngresa la hora: ");
        fflush(stdin);
        scanf("%d", &BHora);
        printf("\nIngresa tu asiento: ");
        fflush(stdin);
        scanf("%d", &BAsiento);
        getchar();
         Apartame[i] = Generar_Boleto(BNombre, BOrigen, BDestino,BId, BHora,BAsiento,BCosto); // LLENADO DE BOLETOS SOLICITADOS
    }


    for(int i=0; i<Cantidad; i++)
    {
        if(GuardaEn_Archivo(Apartame[i]))
        {
            printf("\n!Boleto Comprado con exito!!");
        }
        else{
            printf("\n!!Error al comprar el boleto!!");
        }
    }
}

int GuardaEn_Archivo(Boleto Apartame)
{
    //FICHERO DE ARCHIVO
    FILE* Archivo = NULL;
    int Guardado;

    //APERTURA DE ARCHIVO
    Archivo = fopen(NOMBREARCHIVO, "ab");

    // SI NO SE PUEDE ABRIR
    if(Archivo == NULL)
    {
        perror("\n\n!!Error al abrir el archivo.!!");
    }

    // GUARDADO DE DATOS
    Guardado = fwrite(&Apartame, sizeof(Boleto), 1, Archivo);
    // CERRAR ARCHIVO
    fclose(Archivo);

    return Guardado; //REGRESA BYTES GUARDADO
}


void Buscar_Boleto(void)
{
    int Id;
    Boleto* UnBoleto;

    //SOLICITAR ID DEL BOLETO
    printf("\nIngresa el id de tu boleto: ");
    scanf("%d",&Id);


    UnBoleto = Lee_Archivo(Id);

    if(UnBoleto != NULL)
    {
        Mostrar_Boleto(UnBoleto);
    }
    else{
        printf("\n!!Boleto no encontrado!!");
    }

}

Boleto* Lee_Archivo(int Id)
{
   // FICHERO DE ARCHIVO
    FILE* Archivo = NULL;

    // RESERVACIÓN DE MEMPORIA
    Boleto* UnBoleto = malloc(sizeof(Boleto));

    //APERTURA DEL ARCHIVO
    Archivo = fopen(NOMBREARCHIVO, "rb");

    //COMPROBACIÓN DE APERTURA DE ESTRADO
    if(Archivo == NULL)
    {
        perror("\n!!Error al abrir el archivo.");
        return NULL;
    }

    // BUSQUEDA DEL ID INGRESADO
    while(fread(UnBoleto, sizeof(Boleto), 1, Archivo) == 1)
    {
        if(UnBoleto->Id == Id)
        {
            return UnBoleto;
        }
    }

    free(UnBoleto); //LIBERAR MEMORIA
    fclose(Archivo); //CERRAR ARCHIVO
    return NULL;

}


void Mostrar_Boleto(Boleto* UnBoleto)
{
    // IMPRESIÓN DEL BOLETO
    printf("\n******************");

    printf("\n|Nombre: %s", UnBoleto->Nombre);
    printf("\n|Origen: %s", UnBoleto->Origen);
    printf("\n|Destino: %s",UnBoleto->Destino);
    printf("\n|Id: %d", UnBoleto->Id);
    printf("\n|Hora: %d", UnBoleto->Hora);
    printf("\n|Asiento: %d", UnBoleto->Asiento);
    printf("\n|Costo: %.3f", UnBoleto->Costo);
    printf("\n******************");
}
