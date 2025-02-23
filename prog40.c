#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30};
    int *p1 = &arr[0];
    int *p2 = &arr[2];

    if (p1 < p2)
    {
        printf("p1 aponta para um endereço menor que p2.\n"); // verdadeiro
    }

    return 0;
}
