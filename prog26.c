#include <stdio.h>

int main()
{
    int matriz[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};

    printf("%p\n", matriz);       // Endereço base da matriz   → 0x16d2030f0
    printf("%p\n\n", matriz + 1); // Endereço da segunda linha → 0x16d2030fc

    printf("%p\n", *(matriz + 1));    // Endereço do primeiro elemento da segunda linha  → 0x16d6a70fc
    printf("%d\n\n", **(matriz + 1)); // Valor do primeiro elemento da segunda linha     → 4

    printf("%p\n", *(matriz + 1) + 2);      // Endereço do terceiro elemento da segunda linha → 0x16b797104
    printf("%d\n\n", *(*(matriz + 1) + 2)); // Valor de matriz[1][2]                          → 6

    printf("%d\n", *(*(matriz + 0) + 2));   // matriz[0][2] → 3
    printf("%d\n\n", *(*(matriz + 1) + 1)); // matriz[1][1] → 5

    return 0;
}