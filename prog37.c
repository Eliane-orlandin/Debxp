#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Ponteiro apontando para o primeiro elemento

    printf("Valor inicial: %d\n", *ptr); // 10

    ptr++;                                      // Avança para o próximo inteiro (soma 4 bytes)
    printf("Depois do incremento: %d\n", *ptr); // 20

    ptr--;                                      // Volta um elemento (subtrai 4 bytes)
    printf("Depois do decremento: %d\n", *ptr); // 10

    return 0;
}
