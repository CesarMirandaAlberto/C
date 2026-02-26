/*
					**** ARREGLOS UNIDIMENSIONALES (VECTORES) ****
					
	El presente código implementa el uso de arreglos unidimensionales o vectoresl, donde se simula 
	tener una lista con las matriculas de los alumnos y lista de calificaciones para estas ser ingresadas
	mediante el teclado.
	
	!! ACERCA DEL CÓDIGO !!
		Calificaciones : "Lista" de tipo flotante para las calificaciones
		Lista: "Lista" de tipo entero con las matriculas
		BUSQUEDA DE MATRICULA: A través de un ciclo for mediante iteraciones se compara el valor ingresado
							   desde el teclado con el de la posición del vector, en caso que se encuentre
							   se activa una flag para indicar que se encontro.
		INGRESO DE CALIFICACIONES : Mediante un ciclo for se ingresan las calificaciones a la posición del 
								iterador del vector. Para ingresar las calificaciones solo es posible si la
								flag esta activa.
		IMPTIMIR CALIFICACIONES : Se muestran en consola solo si se igresaron previamente.

*/

//Inclusión de librerias
#include <stdio.h>

//Definición de constantes
#define TAMANO 4
#define NOALUMNOS 5
#define ACTIVO 1

// Función principal
int main()
{
	// Declaración de variables
    float Calificaciones[TAMANO];
    int Lista[NOALUMNOS] = {123,456,789,987,654}; // INICIALIZACIÓN DE VECTOR
    int Matricula;
    char flag;

    flag = 0;

	// Ingreso de matricula
    printf("Ingresa la matricula del alumno: ");
    scanf("%i", &Matricula);

	// BUSQUEDA DE MATRICULA
    for(int i=0; i<NOALUMNOS; i++)
    {
        if(Matricula == Lista[i]) flag = 1;
    }

	// INGRESO DE CALIFICACIONES
    if(flag == ACTIVO)
    {
        printf("\nAlumno encontrado!!");

        for(int i=0; i<TAMANO; i++)
        {
			printf("\nIngresa la calificacion %i: ", i+1);
			scanf("%f", &Calificaciones[i]);
        }

        // IMPTIMIR CALIFICACIONES
        printf("Estas son tus calificaciones \n");
        for(int i=0; i<TAMANO; i++)
        {

            printf("\n%0.1f", Calificaciones[i]);

        }
    }
	// NO ENCONTRADO
    else
    {
         printf("\nAlumno NO encontrado!!");
    }


    return 0; // FIN DEL PROGRAMA
}
