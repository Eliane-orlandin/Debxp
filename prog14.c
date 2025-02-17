#include <stdio.h>

int main()
{
    int i = 123456789;
    unsigned char *c = (unsigned char *)&i;

    printf("\ninteiro %d em hexa: %#010x\n\n", i, i);

    for (int b = 0; b < sizeof(i); b++)
    {
        printf("Byte %d: %#04x - Endereço: %p\n", b, *(c + b), c + b);
    }

    puts("Observe como fica claro o ordenamento 'little-endian'!\n");

    return 0;
}

/*
Little-eendian ou Big-endian?

    * Esses termos se referem à ordenação dos bytes de um valor na mémoria.asm
    * Inteiro '1234567891' em hexa: 0x075bcd15

    * Little-endian (Intel, AMD...):
                +--------+--------+--------+--------+
      Endereço  | 0x0000 | 0x0001 | 0x0002 | 0x0003 |
                +--------+--------+--------+--------+
      Bytes     |   15   |   cd   |   5b   |   07   |
                +--------+--------+--------+--------+

    * Big-endian (Motorola 6800 / 68000....):
                +--------+--------+--------+--------+
      Endereço  | 0x0000 | 0x0001 | 0x0002 | 0x0003 |
                +--------+--------+--------+--------+
      Bytes     |   07   |   5b   |   cd   |   15   |
                +--------+--------+--------+--------+

*/