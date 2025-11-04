/*
				**** OPERADORES DE BITS ****

	El presente código implementa el uso de los operadores de bits
	el código simula los estados de sensores y ventilador e un invernadero
	utilizando operadores logicos.
	La práctica Consta de 4 casos de prueba:

	Sensores de Humedad, Temperatura, CO2.

	**** unsigned char letura: ****
	Variable de tipo char la cual consta de 8 bits la cual almacenará el estado de los sensores,
	para almacenar el estado se implementan mascaras de bits a fin de evitar tener una variable de ocho
	bits para cada sensor.

	Operador Ternario
	El operador ternario se implementa para evaluar el estado de los sensores acorde a la compuert and y asignar
	el estado del sensor a la variable de estado "Encendido" "Apagado".

	**	CASO de PRUEBA 1:
		Mediante el operador | se "enciende" el sensor de humedad e implementa el operador ternario
	**	CASO de PRUEBA 2:
		Se activa la ventila mediante | y se implementa el operador ternario
	**	CASO de PRUEBA 3:
		Se asigna a lecturaantes los estados de los sensores al momento y posteriormente el ventila se "apaga",
		mediante los operadores &~ y se implementa operador ternario.
	**	CASO de PRUEBA 4:
		Se enciende el sensor de CO2 al mismo tiempo que se hace una comparación entre lecturaantes y lectura,
		y mediante el operador ternario se determina que sensores han tenido cambios, para posteriormente
		imprimir los mismos en consola.

*/
#include <stdio.h>

// Mascaras de bits para sensores
#define SENSORHUMEDAD (1 << 0)
#define SENSORTEMPERATURA (1 << 2)
#define SENSORCO2 (1 << 3)

#define VENTILA (1 << 5)

int main()
{
    //Declaracion de variables
    unsigned char lectura;
    unsigned char lecturaantes;
	short int temperatura;


	//Asignación de valores
    lectura = 0;
    lecturaantes = 0;

	// **** CASO DE PRUEBA 1 ****
    lectura |= SENSORHUMEDAD;


    const char* Estatus = (lectura & SENSORHUMEDAD) ? "Encendido" : "Apagado";

    printf("El sensor de humedad esta %s", Estatus);


	// **** CASO DE PRUEBA 2 ****
    lectura |= VENTILA;

    const char* Venti = (lectura & VENTILA) ? "Encendido" : "Apagado";
    printf("\nLa ventilacion se ha %s",Venti);

	// **** CASO DE PRUEBA 3 ****
    lecturaantes = lectura;

    lectura &= ~VENTILA;

    const char* Ventidor = (lectura & VENTILA) ? "Encendido" : "Apagado";
    printf("\nLa ventilacion se ha %s",Ventidor);

	// **** CASO DE PRUEBA 4 ****
    lectura|= SENSORCO2;

    unsigned char cambios = lectura ^ lecturaantes;


    const char* cambiosh = (cambios & SENSORHUMEDAD) ? " dejo de funcionar" : " esta trabajando";
    const char* cambiovt = (cambios & VENTILA) ? " ha terminado" : " esta trabajando";
    const char* cambioco2 = (cambios & SENSORCO2) ? " dejo de funcionar" : " esta trabajando";

    printf("\n\n\n CAMBIOS EN LOS SENSORES......");
    printf("\n El sensor de humedad %s",cambiosh);
    printf("\n El ventilador %s",cambiovt);
    printf("\n El sensor de co2  %s",cambioco2);


    return 0;
}
