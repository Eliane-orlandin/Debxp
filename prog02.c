// conversor de milhas para  quilômetros

#include <stdio.h>  //Biblioteca de entrada e saída.
#include <stdlib.h> //Biblioteca padrão que contém funções para conversão de string.

#define QUILOMETRO 1.60934

int main(int argc, char *argv[]) // argc (número de argumentos) e argv (uma matriz de strings que contém os argumentos passados para o programa).
{
    float ml = atof(argv[1]); // atof = (ASCII to Float).
    float km = ml / QUILOMETRO;

    printf("%f\n", km);

    return 0;
}
