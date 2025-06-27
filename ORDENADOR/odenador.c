#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANHO 256

void ordenarStrings(char** nomes, int total){
    for (int i = 0; i < total - 1; i++){
        for (int z = 0; z < total - 1 - i; z++) {
            if (strcmp(nomes[z], nomes[z + 1]) > 0) {
                char *temp = nomes[z];
                nomes[z] = nomes[z + 1];
                nomes[z + 1] = temp;
            }
        }
    }
}

void ordenarFloats(float *numeros, int total) {
    for (int i = 0; i < total - 1; i++) {
        for (int j = 0; j < total - 1 - i; j++) {
            if (numeros[j] > numeros[j + 1]) {
                float temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }
}

void processarStrings(char *nomeEntrada) {
    FILE *nomes = fopen(nomeEntrada, "r");
    if (nomes == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo '%s'.\n", nomeEntrada);
        exit(EXIT_FAILURE);
    }

    char **nome = NULL;
    int total = 0;
    char linha[TAMANHO];

    while (fgets(linha, TAMANHO, nomes)) {
        linha[strcspn(linha, "\n")] = '\0';

        char **temp = (char **)realloc(nome, (total + 1) * sizeof(char *));
        if (temp == NULL) {
            fprintf(stderr, "Erro de alocação de memória.\n");
            for (int i = 0; i < total; i++) {
                free(nome[i]);
            }
            free(nome);
            fclose(nomes);
            exit(EXIT_FAILURE);
        }
        nome = temp;

        nome[total] = (char *)malloc(strlen(linha) + 1);
        if (nome[total] == NULL) {
            fprintf(stderr, "Erro de alocação de memória.\n");
            for (int i = 0; i <= total; i++) {
                free(nome[i]);
            }
            free(nome);
            fclose(nomes);
            exit(EXIT_FAILURE);
        }
        strcpy(nome[total], linha);
        total++;
    }
    fclose(nomes);

    ordenarStrings(nome, total);

    char saida[256];
    snprintf(saida, sizeof(saida), "%.*s_sorted.txt", (int)(strrchr(nomeEntrada, '.') - nomeEntrada), nomeEntrada);

    FILE *arqn = fopen(saida, "w");
    if (arqn == NULL) {
        fprintf(stderr, "Erro ao criar o arquivo de saída '%s'.\n", saida);
        for (int i = 0; i < total; i++) {
            free(nome[i]);
        }
        free(nome);
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < total; i++) {
        fprintf(arqn, "%s\n", nome[i]);
        free(nome[i]);
    }

    free(nome);
    fclose(arqn);
    printf("Arquivo de nomes ordenado gerado com sucesso: %s\n", saida);
}

void processarFloats(char *numeroEntrada) {
    FILE *numeros = fopen(numeroEntrada, "r");
    if (numeros == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo '%s'.\n", numeroEntrada);
        exit(EXIT_FAILURE);
    }

    float *numero = NULL;
    int total = 0;
    float valor;

    while (fscanf(numeros, "%f", &valor) == 1) {
        float *temp = (float *)realloc(numero, (total + 1) * sizeof(float));
        if (temp == NULL) {
            fprintf(stderr, "Erro de alocação de memória.\n");
            free(numero);
            fclose(numeros);
            exit(EXIT_FAILURE);
        }
        numero = temp;

        numero[total] = valor;
        total++;
    }
    fclose(numeros);

    ordenarFloats(numero, total);

    char saida[256];
    snprintf(saida, sizeof(saida), "%.*s_sorted.txt", (int)(strrchr(numeroEntrada, '.') - numeroEntrada), numeroEntrada);

    FILE *arq = fopen(saida, "w");
    if (arq == NULL) {
        fprintf(stderr, "Erro ao criar o arquivo de saída '%s'.\n", saida);
        free(numero);
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < total; i++) {
        fprintf(arq, "%.2f\n", numero[i]);
    }

    free(numero);
    fclose(arq);
    printf("Arquivo de números ordenado gerado com sucesso: %s\n", saida);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Erro! Precisa-se digitar um dos seguintes modelos:\n");
        fprintf(stderr, "%s -s nomes.txt\n", argv[0]);
        fprintf(stderr, "%s -f numeros.txt\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (strcmp(argv[1], "-s") == 0) {
        processarStrings(argv[2]);
    } else if (strcmp(argv[1], "-f") == 0) {
        processarFloats(argv[2]);
    } else {
        fprintf(stderr, "Opção inválida. Use -s para strings ou -f para floats.\n");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
