#include <stdio.h>

#define SIZE 10

int main()
{
    double arr[SIZE];
    int elementos = sizeof(arr) / sizeof(arr[0]);

    printf(
        "Tamanho             : %2ld bytes\n"
        "Tamanho do elemento : %2ld bytes\n"
        "Elementos           : %2d elementos\n",
        sizeof(arr),
        sizeof(arr[0]),
        elementos);

    return 0;
}