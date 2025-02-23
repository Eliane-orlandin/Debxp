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
