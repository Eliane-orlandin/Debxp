#include <stdio.h>

void teste()
{
    int x = 10; // Essa variável só existe dentro desta função
}

int x = 10; // Pode ser acessada em qualquer função

void mostrar()
{ // Definição da função fora de main()
    printf("%d\n", x);
}

int main()
{
    mostrar(); // Chamada da função mostrar()
    return 0;
}