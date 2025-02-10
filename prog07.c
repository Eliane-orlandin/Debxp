#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{

    printf("\nPrecisão do tipo 'float'      : %d\n", FLT_DIG);
    printf("Precisão do tipo 'double'     : %d\n", DBL_DIG);
    printf("Precisão do tipo 'long double': %d\n\n", LDBL_DIG);

    puts("               0     6       15 18");
    puts("               |.....|........|..|");
    printf("5.0f / 3.0f = %.20f\n", 5.0f / 3.0f);
    printf("5.0 / 3.0   = %.20f\n", 5.0 / 3.0);
    printf("5.0l / 3.0l = %.21Lg\n\n", 5.0l / 3.0l);

    return 0;
}