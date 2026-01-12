/*
                    **** CADENAS DE CARACTERES ****

        El presente código implementa el uso de las cadenas de caracteres en C
*/

#include <stdio.h>
#include <string.h>

#define MAXCARACTERES 20

int main()
{

    //La memoria es asignada automaticamente por el compilador
    char Texto[] = "HOLA MUNDO";
    printf("\n%s", Texto);


    //Tamano de memoria fijo a 19 caracteres + \0 fin de cadena
    char Nombre[MAXCARACTERES];

    // char = 8 bits * 20 = 160 bits = 20 bytes

    printf("Ingresa tu nombre: ");
    scanf("\n%s", Nombre);

    printf("%s ",Nombre);

    fflush(stdin);
    printf("\n\n\n\t\t\tMetodo fgets\n\n\n");
    printf("Ingresa tu nombre: ");
    fgets(Nombre, MAXCARACTERES, stdin); // obtener un texto que será almacenado en la variable nombre con una longitud definida, que será leida del teclado
    //Previene el desvornamiento de buffer lo que puede generar que se escriba el valor restante en cualquier variable o dirección de memoria
    printf("\n%s ",Nombre);


    // Funciones comunes con cadenas de caracteres

    //Mensaje de bienvenida
    const int Conca= 70;
    char Concatenado[Conca];
    char Mensaje[]= " !Bienvenido al curso de programacion!";

    //Concatenar cadenas
    strcat(Concatenado, Nombre); //Agrega el nombre a la variable nueva
    strcat(Concatenado, Mensaje); // Mensaje de bienvenida

    printf("\n%s", Concatenado);

    //Medir tamano de cadena
    int tamano = strlen(Concatenado);
    printf("\nCantidad de letras: %d", tamano);

    //copiar cadena
    char Copia[70];

    strcpy(Copia, Concatenado);
    printf("\nMensaje original: %s", Concatenado);
     printf("\nMensaje Copiado: %s", Copia);


    return 0;
}

