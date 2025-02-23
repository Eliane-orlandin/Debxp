#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *p1 = &arr[1]; // Aponta para 20
    int *p2 = &arr[4]; // Aponta para 50

    printf("Distância entre p1 e p2: %ld elementos\n", p2 - p1);

    return 0;
}
