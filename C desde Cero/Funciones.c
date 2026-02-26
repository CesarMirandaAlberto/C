/*
					**** IMPLEMENTACIÓN DE FUNCIONES ****
					
	El presente código implementa el uso de funciones de diferente tipo, cont retorno, sin retorno,
	sin parámetros. El código implementa la funcionalida de una calculadora con las 4 operaciones
	básicas y los números son ingresados por el usuario desde el teclado.
	Se implementa enum para enumera las operaciones y switch case para evaluar la opción de operación
	ingresada por el usuario, con respecto a las operaciones enumeradas.
	
*/

// Inclusión de librierias
#include <stdio.h>

// Enumeración de operaciones
enum Operaciones{
    SUMA = 1,
    RESTA,
    MULTIPLICACION,
    DIVISION
};

// Prototipado de funciones

//Funciones con retorno
int Calcula_Suma(int n1, int n2);
int  Calcula_Multiplica(int n1, int n2);

float  Calcula_Resta(float numero1, float numero2);

//Sin retorno
void Menu(void);
void  Calcula_Division(float divisor, float dividendo);

// Función principal
int main()
{
    printf("\t\t\t TU CALCULADORA CIENTIFICA \n\n\n");

    printf("\tSelecciona una opcion\n\n");

    Menu();
    return 0;
}

//MENU DE OPCIONES Y SELECCIÓN DE OPERACIÓN
void Menu(void)
{

    int opcion;
    int resultadoentero;
    float resultadoflotante;

    int nu1;
    int nu2;

    printf("Sumar       (1).\n");
    printf("Restar      (2).\n");
    printf("Multiplicar (3).\n");
    printf("Dividir     (4).\n");
    scanf("%i", &opcion);

    printf("Ingresa los dos numeros: ");
    scanf("%i %i", &nu1, &nu2);

	//CALCULO DE OPERACIÓN
    switch (opcion)
    {

        case SUMA:
                resultadoentero = Calcula_Suma(nu1, nu2);
                printf("La suma es: %i", resultadoentero);
        break;

        case RESTA:
                resultadoflotante = Calcula_Resta(nu1, nu2);
                printf("La resta es: %.2f",resultadoflotante);
        break;

        case MULTIPLICACION:
                resultadoentero = Calcula_Multiplica(nu1, nu2);
                printf("La multiplicacion es: %i",resultadoentero);
        break;

        case DIVISION:

                Calcula_Division(nu1,nu2);
        break;

        default:
                printf("Opcion Incorrecta\n");
        break;

    }

}
 // FUNCIONES QUE IMPLEMENTAN LAS OPERACIONES
int Calcula_Suma(int n1, int n2)
{
    int resultado;

    resultado = n1+n2;

    return resultado;
}

int  Calcula_Multiplica(int n1, int n2)
{
    int resultado;

    resultado = n1 *n2;
    return  resultado;
}

float  Calcula_Resta(float numero1, float numero2)
{
    return numero1 - numero2;
}

void  Calcula_Division(float divisor, float dividendo)
{
    float dividido;
    dividido = divisor/dividendo;

    printf("La division es: %.2f", dividido);
}

