#include <stdio.h>

int main(void)
{

    char c[] = {'A', 'B', 'C'};       // array de caracteres
    char s[] = {'D', 'E', 'F', '\0'}; // string

    printf(
        "Array de caracteres: %s (%ld bytes)\n"
        "String             : %s (%ld bytes)\n\n",
        c, sizeof(c), s, sizeof(s));

    return 0;
}