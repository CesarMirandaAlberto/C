/*
								**** CICLO DO-WHILE ****
	
	El presente código implementa el uso de ciclo do-while donde se simula el ingreso de la contraseña
	de un usuario, la cual mediante la función strcmp determina si la contraseña ingresada por el usuario
	es identica a la registrada en el sistema. El ciclo do-while da 5 intentos al usuario para poder acceder
	en caso que se superen estas veces será bloqueado, se implementan condicionales para analizar y determinar
	cuando se detiene el ciclo do-while.
	
	** NOTAS **
	if(strcmp(Buffer, Contrasena) == 0) "Si no se detecta diferencia alguna entre las cadenas de caracteres 
										 comparadas".
	break : Detiene la ejecución del ciclo.
	i++ = iterador que cuenta las veces que se intenta acceder.
	
*/

// Inclusión de librerias
#include <stdio.h>

// Constantes a utilizar
#define INTENTOS 5
#define CARACTERES 201

// Función principal
int main()
{
	// Definición de variables 
    char Contrasena[CARACTERES]= "Usuario123";
    char Buffer[CARACTERES];
    int i;

	// Ciclo do- while
    do{
		//Ingreso de contraseña de usuario
        fflush(stdin);
        printf("\nIngresa tu contrasena: ");
        fgets(Buffer, CARACTERES, stdin);
        Buffer[strcspn(Buffer, "\n")] = 0;

		//Comparaciones
        if(strcmp(Buffer, Contrasena) == 0)
        {
            printf("\n\n\t\t\tSesion inicida");
            printf("\n\n\t\t\tBienvenido");
            i=0;
            break;
        }else{
            printf("\nContrasena incorrecta!!!");
            i++;
        }

    }while(i<INTENTOS);

	// Bloqueo del sistema
    if(i == 5)
    {
        printf("\nSuperaste el limite de intentos permitidos intenta en 1 hr");
    }

    return 0; // Fin del programa
}
