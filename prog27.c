#include <stdio.h>

int main()
{
    // VARIÁVEL DE PONTEIRO
    int x = 10;    // Variável comum
    int *ptr = &x; // Ponteiro para 'x'

    printf("Endereço de x          : %p\n", &x);
    printf("Valor de ptr           : %p\n", ptr);  // Mesmo endereço de 'x'
    printf("Valor apontado por ptr : %d\n", *ptr); // 10

    // PONTEIRO LITERAL
    /*char *ptr = "Olá, mundo!";  // Ponteiro recebe um endereço fixo da string
    printf("%s\n", ptr);  // Exibe "Olá, mundo!"
    */
    char str[] = "Olá, mundo!";
    str[0] = 'A'; // Agora funciona!
    printf("%s\n", str);

    return 0;
}

/*
Diferença prática
+------------------------+------------------------+-----------------------+
+ Conceito               | Variável de Ponteiro   | Ponteiro Literal      |
+------------------------+------------------------+-----------------------+
+ Tipo                   | Variável que armazena  | Um endereço fixo na   |
+                        | um endereço            | memória               |
+------------------------+------------------------+-----------------------+
+ Pode mudar de endereço | Sim                    | Não(é fixo em strings |
+                        |                        | literais)             |
+------------------------+------------------------+-----------------------+
+ Pode alterar os dados  | Sim (se não for const) | Não(strigs literais   |
+ apontados              |                        | são imutáveis         |
+------------------------+------------------------+-----------------------+
*/