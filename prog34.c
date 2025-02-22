#include <stdio.h>
// F = (C * 1.8) + 32
int main(void)
{

    int c = 100;

    printf("%d°C = %.2f°F", c, c * 1.8 + 32);

    return 0;
}