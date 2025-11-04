/*
			**** ENTRADA Y SALIDA DE DATOS ****

		El presente código implementa la entrada y salida de datos al usuario en C.
		el programa consta de dos casos de prueba y un experimento:

		CASO DE PRUEBA 1:
		Calcular el área de un circulo el cual se
		calculará con constante(pi) y radio(entrada de datos) donde una vez calculada
		el área esta será mostrada en consola(salida de datos).

		CASO DE PRUEBA 2:
		Leer cadena de caracteres de parte del usuario y mostrar la misma concatenada con una definida en el programa
		Consideraciones
		* char Nombre[MAXCARACTERES]; tiene una longitud definida manualmente es decir caracteres que puede ingresar el usuario
		* char Estatus[] = "Aprobado"; la longitud es asignada por el compilador al asignar el texto.

		**** CONSIDERACIONES ****
		fflush(stdin): limpiar el buffer del teclado NO ES PARTE DEL ESTANDAR DE C POR LO QUE NO ESTA EN TODOS LOS COMPILADORES Y PUEDE
		MARCAR ERRORES.

*/

//Inclusión de libreria
#include <stdio.h>

//Constante
#define MAXCARACTERES 20

//Funcion principal
int main()
{

	// CASO DE PRUEBA 1
    //Declaracion de variables
    float area;
    float radio;
	const float pi= 3.1416;

    //Entrada de datos
    printf("Ingresa el valor del radio: ");
    scanf("%f", &radio);

    //Calculos
    area = pi* radio*radio;

    printf("El area del circulo es: %0.3f", area);


    fflush(stdin);

	//CASO DE PRUEBA 2
	//Cadena de caracteres del usuario
    char Nombre[MAXCARACTERES];

	// Cadena de caracteres definida en programa
    char Estatus[] = "Aprobado";

	// Ingreso de datos
    printf("\nIngresa tu nombre: ");
    scanf("%s", Nombre);

	// Resultados
    printf("\n%s", Nombre);
    printf(" tu estatus es %s", Estatus);


    return 0; //Fin del programa
}
