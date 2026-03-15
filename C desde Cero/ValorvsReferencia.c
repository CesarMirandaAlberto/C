/*
                    **** FUNCIONES POR VALOR VS REFERENCIA ****

        El presente código implementa el uso de funciones por valor y por referencia, el código se divide en diferentes partes:

            * PARTE 1 FUNCIÓN POR VALOR: A través de la variable en la función principal se usa como parámetro en la función por valor
            donde en la función por valor se modifica para ver los efectos que produce en la variable original.

            * PARTE 2 FUNCIÓN POR REFERENCIA : Mediante esta función se envia como parámetro la variable de la función principal donde
            su valor es modificado y posteriormete se imprime en consola para ver si el valor original de la variable en la función principal.

            * PARTE 3 FUNCIÓN VOID: Mediante una cadena de carácteres vacia en la función principal se envia como parámetro a la función
            donde esta concatena diferentes textos locales al puntero y posteriormente se imprime en consola.

*/
// INCLUSIÓN DE LIBRERIAS
#include <stdio.h>
#include <string.h>

// DEFINICIÓN DE CONSTANTES
#define CARACTERES 50

//PROTOTIPADO DE FUNCIONES
int Por_Valor(int A);
int  Por_Referencia(int *A);
// PARA TEXTO
void Char_Referencia(char* Bienvenida);

//FUNCIÓN PRINCIPAL
int main()
{
    // DEFINICIÓN DE VARIABLES
    int A;
    int resultado;
    A = 12;

    //PARTE 1
    printf("Valor original de A: %i", A);
    printf("\n!!!Llamado de funcion por valor!!!");
    resultado = Por_Valor(A);
    printf("\nValor de A : %i",A);
    printf("\n!Ah pero dentro de la funcion A: %i", resultado);


    //PARTE 2
    printf("\n\n\n!!!Sin Embargo por referencia!!!\n");

    Por_Referencia(&A);
    printf("Valor de A por referencia: %i", A);


    //SEGUNDO EJEMPLO
    char Bienvenida[CARACTERES]="";
    printf("\n%s", Bienvenida);

    printf("\nMando LLamar por referencia\n");
    Char_Referencia(Bienvenida);

    printf("\n%s", Bienvenida);


    return 0;
}

// IMPLEMENTACIÓN DE FUNCIÓN POR VALOR
int Por_Valor(int A)
{
    A = 14;
    return A;
}

// POR REFERENCIA
int  Por_Referencia(int *A)
{
    *A = 37;
    return *A;
}

void Char_Referencia(char* Bienvenida)
{
    char Mensaje1[] = "!Hola!";
    char Mensaje2[] = " Gracias por suscribirte";

    strcat(Bienvenida, Mensaje1);
    strcat(Bienvenida, Mensaje2);
}
