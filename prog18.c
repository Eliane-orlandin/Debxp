#include <stdio.h>

int main()
{
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};
    printf("%d\n", arr[1][2]);
    arr[1][2] = 7;
    printf("%d\n", arr[1][2]);
}