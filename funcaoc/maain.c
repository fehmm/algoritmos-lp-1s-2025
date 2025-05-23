#include <stdio.h>

#define TAM_NOME 64

typedef struct aluno
{
    char nome[TAM_NOME];
    float nota;
}aluno;

void imprimir_aluno(struct aluno a){
    printf("%s - nota: %.2f\n", a.nome, a.nota);
    
};


int main(int argc, char* argv[])

{

    int n = 5;
     aluno alunos[n]; 

    for( 1 = 0 ); i < a; i++) {
    printf("digite o nome dops 5 alunos0:\n ");
    fgets (alunos[0].nome, TAM_NOME, stdin);
    printf("digite a nota dos alunos :");
    scanf("%f", &alunos[0].nota);

    imprimir_aluno[0];

     
    return 0;
}
