#include <stdlib.h>
#include "Aritmeticas.h"

/*int variableGlobal = 80;
void funcion(int);*/

int main()
{
    int edad = pedirEntero("Ingrese edad: ", 1, 100);
    int legajo = pedirEntero("Ingrese legajo; ", 0, 2000);
    int nota = pedirEntero("Ingrese nota: ", 1, 10);
    int documento = pedirEntero("Ingrese documento: ", 0, 10000);

    printf("%d--%d--%d--%d\n\n", edad, legajo, nota, documento);

    return 0;
}

//int n1 = 10;
    //int n2 = 8;
    //funcion(77);
    /*variableGlobal = 70;
    printf("%d", variableGlobal);*/

/* void funcion(int x)
{
    //int a = 4;
    //p = 3;
    /*variableGlobal = 100;
    printf("\n%d", variableGlobal);
}*/
