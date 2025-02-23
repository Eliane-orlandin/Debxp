#include <stdio.h>

// Definição de função
int soma(int a, int b)
{
    return a + b; // Retorna a soma dos dois números
}

int main()
{

    int resultado = soma(5, 3); // Chamando a função e armazenando o retorno
    printf("A soma é: %d", resultado);
    return 0;
}