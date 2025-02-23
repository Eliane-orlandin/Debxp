#include <stdio.h>

void saudacao(char nome[])
{
    printf("Olá, %s!\n", nome);
}
int main()
{
    saudacao("Eliane");
    return 0;
}