#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CONSULTAS 50

typedef struct {
    int id;
    char paciente[50];
    char dataNascimento[15];
    char especialidade[30];
    char data[20];
    char status[20];
} consulta;

consulta consultas[MAX_CONSULTAS];
int contador = 0;

void escolherEspecialidade(char especialidade[]) {
    int opcao;
    printf("\nEscolha a especialidade:\n");
    printf("1. Pediatria\n2. Endocrinologia\n3. Dermatologia\n4. Ginecologia\n5. Nutrologia\n6. Cardiologia\n7. Otorrinolaringologia\n");
    printf("opcao: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1: strcpy(especialidade, "Pediatria"); break;
        case 2: strcpy(especialidade, "Endocrinologia"); break;
        case 3: strcpy(especialidade, "Dermatologia"); break;
        case 4: strcpy(especialidade, "Ginecologia"); break;
        case 5: strcpy(especialidade, "Nutrologia"); break;
        case 6: strcpy(especialidade, "Cardiologia"); break;
        case 7: strcpy(especialidade, "Otorrinolaringologia"); break;
        default: strcpy(especialidade, "Especialidade nao Definida");
    }
}

void criarConsulta() {
    if (contador < MAX_CONSULTAS) {
        consultas[contador].id = contador + 1;
        printf("Nome do paciente: ");
        scanf(" %[^\n]", consultas[contador].paciente);
        printf("Data de nascimento: ");
        scanf(" %[^\n]", consultas[contador].dataNascimento);
        escolherEspecialidade(consultas[contador].especialidade); 
        printf("Data da consulta: ");
        scanf(" %[^\n]", consultas[contador].data);
        strcpy(consultas[contador].status, "Agendada.");
        contador++;
        printf("Consulta agendada com sucesso!\n");
    } else {
        printf("Limite de consultas atingido.\n");
    }
}

void atualizarConsulta() {
    int id;
    printf("Digite o ID da consulta a ser atualizada: ");
    scanf("%d", &id);

    for (int i = 0; i < contador; i++) {
        if (consultas[i].id == id) {
            printf("Novo nome do paciente: ");
            scanf(" %[^\n]", consultas[i].paciente);
            printf("Nova data de nascimento: ");
            scanf(" %[^\n]", consultas[i].dataNascimento);
            escolherEspecialidade(consultas[i].especialidade);
            printf("Nova data da consulta: ");
            scanf(" %[^\n]", consultas[i].data);
            printf("Status da consulta (Agendada/Finalizada): ");
            scanf(" %[^\n]", consultas[i].status);

            printf("Consulta atualizada com sucesso!\n");
            return;
        }
    }
    printf("Consulta nao encontrada.\n");
}

void excluirConsulta() {
    int id;
    printf("Digite o ID da consulta a ser excluida: ");
    scanf("%d", &id);

    for (int i = 0; i < contador; i++) {
        if (consultas[i].id == id) {
            for (int j = i; j < contador - 1; j++) {
                consultas[j] = consultas[j + 1]; 
            }
            contador--;  // reduz o número de consultas
            printf("Consulta excluida com sucesso!\n");
            return;
        }
    }
    printf("Consulta nao encontrada.\n");
}

void listarConsultas() {
    printf("\nLista de Consultas Medicas:\n");
    for (int i = 0; i < contador; i++) {
        printf("ID: %d | Paciente: %s | Data de Nascimento: %s | Especialidade: %s | Data: %s | Status: %s\n",
            consultas[i].id, 
            consultas[i].paciente, 
            consultas[i].dataNascimento, 
            consultas[i].especialidade, 
            consultas[i].data, 
            consultas[i].status);
    }
}

void menuPrincipal() {
    int opcao;
    do {
        printf("\nMenu Principal\n");
        printf("1. Criar Consulta\n");
        printf("2. Listar Consultas\n");
        printf("3. Atualizar Consulta\n");
        printf("4. Excluir Consulta\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: criarConsulta(); break;
            case 2: listarConsultas(); break;
            case 3: atualizarConsulta(); break;
            case 4: excluirConsulta(); break;
            case 5: printf("Saindo do programa...\n"); break;
            default: printf("opcao invalida.\n");
        }
    } while (opcao != 5);
}

int main() {
    menuPrincipal();
    return 0;
}