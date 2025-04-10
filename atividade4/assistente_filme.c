#include <stdio.h>

int main(int argc, char const *argv[]) {
    int tipo, genero, subgenero;

    printf("Ola! Serei o seu guia para a escolha do filme\n");
    printf("Escolha o tipo de filme:\n");
    
    printf("1 - Filme Leve\n");
    printf("2 - Filme Intenso\n");
    scanf("%d", &tipo);

    if (tipo == 1) {
        printf("Escolha o genero:\n");
        printf("1 - Comedia\n");
        printf("2 - Animacao\n");
        scanf("%d", &genero);

        if (genero == 1) {
            printf("gente grande\n");
        } else if (genero == 2) {
            printf("Sugestao: ponyo\n");
        } else {
            printf("Opcao invalida\n");
        }
    } else if (tipo == 2) {
        printf("Escolha o genero:\n");
        printf("1 - Terror\n");
        printf("2 - Acao\n");
        scanf("%d", &genero);

        if (genero == 1) {
            printf("Escolha o subgenero:\n");
            printf("1 - Terror psicologico\n");
            printf("2 - Terror sobrenatural\n");
            scanf("%d", &subgenero);

            if (subgenero == 1) {
                printf("Sugestao: Marcas da Maldicao\n");
            } else if (subgenero == 2) {
                printf("Sugestao: Invocacao do Mal\n");
            } else {
                printf("Opcao invalida\n");
            }
        } else if (genero == 2) {
            printf("Escolha o subgenero:\n");
            printf("1 - Super-herois\n");
            printf("2 - Aventura realista\n");
            scanf("%d", &subgenero);

            if (subgenero == 1) {
                printf("Sugestao: o estraordinario homem aranha\n");
            } else if (subgenero == 2) {
                printf("Sugestao: Velozes e Furiosos\n");
            } else {
                printf("Opcao invalida\n");
            }
        } else {
            printf("Opcao invalida\n");
        }
    } else {
        printf("Opcao invalida\n");
    }

    return 0;
}