#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    // Verifica se o número correto de argumentos foi passado
    if (argc != 4) {
        printf("Uso: %s <min> <max> <esperado>\n", argv[0]);
        return 1;
    }

    // Converte os argumentos de string para inteiro
    int min = atoi(argv[1]);
    int max = atoi(argv[2]);
    int esperado = atoi(argv[3]);

    // Validações
    if (min >= max) {
        printf("Erro: o valor mínimo deve ser menor que o valor máximo.\n");
        return 1;
    }

    if (esperado < min || esperado > max) {
        printf("Erro: o valor esperado deve estar entre o mínimo e o máximo (inclusive).\n");
        return 1;
    }

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));
    int sorteado = (rand() % (max - min + 1)) + min;

    // Verifica se foi sorteado
    int foi_sorteado = (sorteado == esperado);

    // Imprime o resultado na tela
    printf("Número sorteado: %d\n", sorteado);
    if (foi_sorteado) {
        printf("Resultado: sorteado!\n");
    } else {
        printf("Resultado: não sorteado.\n");
    }

    // Grava no log.txt
    FILE *arquivo = fopen("log.txt", "a");  // "a" para adicionar ao final
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo log.txt");
        return 1;
    }

    fprintf(arquivo, "número mínimo: %d\n", min);
    fprintf(arquivo, "número máximo: %d\n", max);
    fprintf(arquivo, "número esperado: %d\n", esperado);
    fprintf(arquivo, "número sorteado: %d\n", sorteado);
    fprintf(arquivo, "resultado: %s\n\n", foi_sorteado ? "sorteado" : "não sorteado");

    fclose(arquivo);

    return 0;
}