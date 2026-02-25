/*
						**** CICLO WHILE  ****

    El presente código implementa el uso del ciclo while el cual implementa el calculo
	del factorial del número dado por el usuario.
*/

//Inclusión de librerias
#include <stdio.h>

//Función principal
int main()
{
	// Declaración de variables
    int i;
    int numero;
    int factorial;


    //Inicialización de varibles
    i=1;
    factorial=1;

	// Ingreso de datos del usuario
    printf("Introduce el numero a calcular el factorial: ");
    scanf("%i", &numero);

	// Cálculo de factorial dentro del bucle while
    while(i<= numero)
    {
        factorial *=i;

        i++;
    }

	//Resultados
    printf("El factorial es: %i");
    return 0;

}
