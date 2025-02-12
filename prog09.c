#include <stdio.h>

int main()
{
    int valor = 10;
    int *pvalor = &valor;

    printf("%d\n", valor);   // Imprime 10
    printf("%d\n", *pvalor); // Imprime 10
    printf("%p\n", &valor);  // Imprime o endereço
    printf("%p\n", pvalor);  // Imprime o endereço

    return 0;
}