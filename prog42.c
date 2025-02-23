#include <stdio.h>

int main()
{
    int x = 10;
    int *p = &x;   // Ponteiro para x
    int **pp = &p; // Ponteiro para o ponteiro p

    printf("Valor de x        : %d\n", x);    // 10
    printf("Valor de x via p  : %d\n", *p);   // 10
    printf("Valor de x via pp : %d\n", **pp); // 10

    return 0;
}
/*
A sintaxe básica para declarar um ponteiro de ponteiros em C é:

tipo **nome;

Onde:

O primeiro * indica que é um ponteiro.
O segundo * indica que é um ponteiro para outro ponteiro.

Explicação do exercício:

x → Variável contendo 10
p → Aponta para x, então *p retorna 10
pp → Aponta para p, então **pp retorna 10
*pp retorna o endereço de p
**pp retorna o valor de x
*/