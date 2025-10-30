#include <stdio.h>

int main(void) 
{
    int i;
    float numeros[10] = {3.3, 4.4, 5.2, 2.3, 4.5, 6.8, 9.8, 8.2, 7.5, 9.2};
    float numerosGrandes[10];
    float *origen = numeros;
    float *copia = numerosGrandes;

    for (i = 0; i < 10; i++)
    {
        *copia = *origen;
        copia++;
        origen++;
    }

    float *finGrandes = copia;
    float *inicioGrandes = numerosGrandes;
    float *mitad1 = numerosGrandes + 4;
    float *mitad2 = mitad1 + 1;

    for ( ; mitad1 >= inicioGrandes ; mitad1--, mitad2++)
    {
        printf("%.1f\n", *mitad1);
        printf("%.1f\n", *mitad2);
    }

    return 0;
}
