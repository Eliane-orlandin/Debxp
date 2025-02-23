#include <stdio.h>

int main()
{
    char c = 'A';
    double d = 3.14;

    char *pc = &c;
    double *pd = &d;

    printf("Endereço de pc: %p, pc+1: %p\n", (void *)pc, (void *)(pc + 1));
    printf("Endereço de pd: %p, pd+1: %p\n", (void *)pd, (void *)(pd + 1));

    return 0;
}
/*
A conversão para (void*) é necessária porque %p, o especificador de formato para ponteiros no printf, espera um ponteiro genérico do tipo void*.

Por que usar (void*)?
Em C, o especificador %p do printf exige um argumento do tipo void*. No entanto, pc e pd são ponteiros para tipos específicos (char* e double*).

Sem a conversão explícita para (void*), alguns compiladores podem emitir avisos ou até mesmo causar comportamento indefinido em algumas arquiteturas.
*/