// Se requiere obtener la raíz cuadrada, el exponencial, el logaritmo natural y las tres funciones trigonométricas de un número inicializado. Mediante llamadas a funciones.
#include <stdio.h>
#include <math.h>
int main()
{
    float numero;
    printf("Ingrese el n%cmero: ", 163);
    scanf("%f", &numero);
    printf("La ra%cz cuadrada es: %f, el exponencial es: %f, el logaritmo natural es: %f, el seno es: %f radianes, el coseno es: %f radianes y la tangente es: %f radianes", 162, sqrt(numero), exp(numero), log(numero), sin(numero), cos(numero), tan(numero));
    return 0;
}