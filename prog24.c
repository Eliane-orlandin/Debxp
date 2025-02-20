#include <stdio.h>

int main()
{

    int arr[5] = {15, 25, 43, 64, 51};
    int *pa = arr;

    for (int i = 0; i < 5; i++)
    {
        printf(
            "pa + %d = %p ⭢ *(pa + %d) = %d\n",
            i, pa + 1, i, *(pa + 1));
    }
    return 0;
}