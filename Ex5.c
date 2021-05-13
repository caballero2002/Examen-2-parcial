#include <stdio.h>

int main ()
{
    /* Axel Emanuel Caballero Garcia*/

    float numerodepersonas, numerodealimentos, porciones;
    printf("\n\n Axel Emanuel Caballero García");
    printf("\n\n Programa 1");
    printf("\n\n Dame el número de personas");
    scanf("%f", &numerodepersonas);
    printf("\n\n Dame el número de alimentos disponibles");
    scanf("%f", &numerodealimentos);
    porciones = numerodealimentos / numerodepersonas;
    printf("\n\n La porcion para dividir equitativamente a cada persona es %f", porciones);
    return 0;
}