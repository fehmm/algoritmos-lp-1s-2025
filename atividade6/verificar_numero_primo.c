#include <stdio.h>

int e_primo(int n) {
    if (n < 2) {
        return 0; // não é primo
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // não é primo
        }
    }
    return 1; // é primo
}

int main(int argc, char* argv) {
    
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (e_primo(numero)) {
        printf("%d e um numero primo.\n", numero);
    } else {
        printf("%d nao e um numero primo.\n", numero);
    }

    return 0;
}