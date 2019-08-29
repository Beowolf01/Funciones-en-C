#include <stdio.h>
#include <stdlib.h>

void calcular(int numero1, int numero2, int operacion);
int pedirDato();
float sumar(int numero1, int numero2);
float restar(int numero1, int numero2);
float multiplicar(int numero1, int numero2);
float dividir(int numero1, int numero2);
void mostrar (float);

/*void calcular(int numero1, int numero2, int operacion);
void sumar(int numero1, int numero2);
void restar(int numero1, int numero2);
void multiplicar(int numero1, int numero2);
void dividir(int numero1, int numero2);
*/
int main()
{
    printf("Ingrese que operacion desea hacer: \n 1-Sumar");
    printf("\n 2-Restar \n 3-Multiplicar \n 4-Dividir\n");
    int operacion = pedirDato();
    printf("Ingrese el primer numero");
    int numero1 = pedirDato();
    printf("Ingrese el segundo numero");
    int numero2 = pedirDato();
    calcular(1, 1, 2);
    calcular(3, 7, 1);
    calcular(10, 2, 4);
    calcular(2, 3, 3);
    return 0;
}

void calcular(int numero1, int numero2, int operacion)
{
    int sumar = numero1+numero2;
    int restar = numero1-numero2;
    int multiplicar = numero1*numero2;
    int dividir = numero1/numero2;
    float resultado;
    switch(operacion)
    {
    case 1:
        resultado = sumar;
        break;
    case 2:
        resultado = restar;
        break;
    case 3:
        resultado = multiplicar;
        break;
    case 4:
        resultado = dividir;
        break;
    }
    printf("\n El resultado es: %f", resultado);

}


