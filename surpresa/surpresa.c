#include <stdio.h>

int main() {
    int i, j;
    int n = 6; // tamanho do coração

    for (i = n / 2; i <= n; i += 2) {
        for (j = 1; j < n - i; j += 2)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    // Parte inferior do coração
    for (i = n; i >= 1; i--) {
        for (j = 0; j < n - i; j++)
            printf(" ");
        for (j = 1; j <= (i * 2) - 1; j++)
            printf("*");
        printf("\n");
    }


    printf("\nFeliz Aniversário, meu amor! 💖\n");
    printf("Que o seu dia seja tão lindo quanto você!\n");

    return 0;
}