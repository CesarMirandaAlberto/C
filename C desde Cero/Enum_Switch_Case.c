/*
								**** SWITCH CASE Y ENUM ****
	
	El presente código implementa el uso de switch case y enum a fin de analizar el
	funcionamiento de estos y comparar su uso y utilidad frente al if-else.
	El código simula el ingreso de una contraseña de un alumno donde al ser correcta se
	desplega un menu de múltiples opciones a escojer.
	
	USO DE SWITCH CASE : Se implementa para seleccionar las opciones  que puede tener el 
	alumno.
	ENUM : Se implementa para agrupar y asignar un valor en orden las posibles opciones 
	que tiene el alumno.
	if : Se implementa la condicional if para determinar mediante la función strcmp si la
	cadena texto ingresada desde el teclado es igual a la contraseña definida en el programa
	
	
*/

//Inclusión de librerias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Constantes
#define CARACTERES 20
#define MATERIAS 4
#define MINIMOBECAS 9

//Enumeración de posibles opciones 
enum Opciones{
    CONSULTAR = 1,
    BECAS,
    SALIR
};

//Función principal
int main()
{
	//Definición de variables
    char Contrasena[CARACTERES]= "1234";

    char Buffer[CARACTERES];
    short int opcion;

    float Programacion;
    float Electronica;
    float Senales;
    float Embebidos;
    float Promedio;

    Programacion = 9.3;
    Electronica= 8.7;
    Senales= 8.9;
    Embebidos= 9.9;

    //Promedio
    Promedio = (Programacion + Electronica+ Senales+ Embebidos) / MATERIAS;

    fflush(stdin);
    printf("Ingresa tu contrasena: ");
    fgets(Buffer, CARACTERES, stdin);

    //Elimina el salto de linea
    Buffer[strcspn(Buffer, "\n")] = 0;

	//Condicional if
    if (strcmp(Buffer, Contrasena) == 0)
    {
        //Menu principal
        printf("\n\t\t\t\t *****Bienvenido *****\n\n");
        printf("Selecciona una opcion\n\n");

        printf("Consulta Calificaciones 1.\n");
        printf("Becas                   2.\n");
        printf("Salir                   3.\n");
        fflush(stdin);
        scanf("%i: ", &opcion);

        // Switch case
        switch (opcion)
        {
            case CONSULTAR:
                printf("\n\n\t\t\tTus calificaciones\n\n");
                printf("\nMateria           Calificacion");
                printf("\nProgramacion         %.2f", Programacion);
                printf("\nElectronica          %.2f", Electronica);
                printf("\nSenales              %.2f", Senales);
                printf("\nEmbebidos            %.2f", Embebidos);

            break;

            case BECAS:
                printf("Tu promedio es: %.2f", Promedio);

                    if(Promedio >= MINIMOBECAS)
                    {
                        printf("\nHAZ GANADO UNA BECA");
                    }
                    else{
                        printf("\nLo sentimos no eres elegible para una beca");
                    }

            break;

            case SALIR:
                    exit(0);
            break;
            default:
                    printf("Opcion Incorrecta\n");
            break;
        }
    }

    else{
        printf("Contrasena incorrecta");
    }
    return 0; // Fin del programa
}
