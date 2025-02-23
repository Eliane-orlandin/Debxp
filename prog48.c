#include <stdio.h>
/*
void alterar(int x)
{
    x = 20;
}
*/
void alterar(int *x)
{
    *x = 20;
}

int main()
{
    /*
    int num = 10; // Por Valor (Copia o valor para a função, sem alterar o original)
    alterar(num);
    printf("%d\n", num); // Saída: 10 (não foi alterado)
    return 0;
    */

    int num = 10;
    alterar(&num);       // Por Referência (Usando ponteiros para alterar o valor original)
    printf("%d\n", num); // Saída: 20 (foi alterado)
    return 0;
}
