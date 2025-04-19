#include <stdio.h>

int main(int argc, char* argv[]){
    
    int a;
    int i; 
    float soma = 0.0;
    float maior = 0.0;
    float menor = 10.0;
    int aprovados = 0;
    int k;

    printf("Informe a quantidade de alunos: ");
    scanf("%d", &a);

    if (a <= 0) {
        printf("Número inválido de alunos.\n");
        return 1;
    }

    float notas[a]; 

    for (i = 0; i < a; i++) {
        do {
            printf("Digite a nota do aluno %d (0.0 a 10.0): ", i + 1);
            scanf("%f", &notas[i]);

            if (notas[i] < 0.0 || notas[i] > 10.0) {
                printf("Nota inválida! Digite novamente.\n");
            }
        } while (notas[i] < 0.0 || notas[i] > 10.0);

        soma += notas[i];

        if (notas[i] > maior) {
            maior = notas[i];
        }

        if (notas[i] < menor) {
            menor = notas[i];
        }

        if (notas[i] >= 6.0) {
            aprovados++;
        }
    }

    printf("\nDigite a posição do aluno que deseja ver a nota (1 a %d): ", a);
    scanf("%d", &k);

    if (k >= 1 && k <= a) {
        printf("Nota do aluno na posição %d: %.2f\n", k, notas[k - 1]);
    } else {
        printf("Posição inválida.\n");
    }

    printf("\n--- Resultados ---\n");
    printf("Média geral da turma: %.2f\n", soma / a);
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);
    printf("Quantidade de alunos aprovados (nota >= 6.0): %d\n", aprovados);

    return 0;
}