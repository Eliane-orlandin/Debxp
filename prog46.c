#include <stdio.h>

// Protótipo da função (declaração)
int dobro(int x);

int main()
{

    int n = 4;
    printf("O dobro de %d é %d\n", n, dobro(n));

    return 0;
}

// Definição da função
int dobro(int x)
{
    return x * 2;
}