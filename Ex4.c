#include <stdio.h>

int main ()
{
    /* Axel Emanuel Caballero Garcia*/

    float peso, altura, IMC;
    printf("\n\n Axel Emanuel Caballero García");
    printf("\n\n Programa 7");
    printf("\n\n Calcular el índice de masa corporal");
    printf("\n\n Dame el peso en kilogramos");
    scanf("%f", &peso);
    printf("\n\n Dame la altura en centímetros");
    scanf("%f", &altura);
    IMC = peso / (altura * altura);
    printf("\n\n La masa muscular es %f", IMC);
    return 0;
}