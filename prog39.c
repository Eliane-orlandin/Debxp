#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("Usando ponteiros para acessar o array:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Elemento %d: %d\n", i, *(ptr + i));
    }

    return 0;
}
