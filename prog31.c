#include <stdio.h>

int main(void)
{

    char fruta[] = "Banana"; // Array de caracteres
    char *bicho = "Zebra";   // Ponteiro para string literal
    char cor[5];             // Array de caracteres
    char *carro;             // Variável de ponteiro
    // Lembre-se: nomes de arrays não podem participar de atribuições!
    // cor = "roxo"; ⭢ Prova erro! O nome da array é uma constante e não pode ser mudado.

    cor[0] = 'R';
    cor[1] = 'o';
    cor[2] = 'x';
    cor[3] = 'o';
    cor[4] = '\0';

    // Mas ponteiros podem!
    carro = "Fusca"; // O ponteiro é uma variável, por isso pode haver atribuições.

    printf(
        "Fruta ⭢ %s\nBicho ⭢ %s\nCor   ⭢ %s\nCarro ⭢ %s\n",
        fruta, bicho, cor, carro);

    return 0;
}