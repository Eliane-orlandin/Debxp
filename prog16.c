#include <stdio.h>

int main()
{
    float valor[4];

    for (int i = 0; i < 10; i++)
    {
        valor[1] = i + 5;
        printf("Valor %d: R$ %5.2f - Índice %d\n", i + 1, valor[i], i);
    }
    return 0;
}