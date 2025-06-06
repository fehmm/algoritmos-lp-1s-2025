#include <stdio.h>


/*
    MODOS DE ABERTURA DE ARQUIVO
    'r' -> para leitura
    'w' -> criar/sobrescrever e escrever no arquivo
    'a' -> criar, se não existir, e adicionar ao final do arquivo
*/


int main(int argc, char* argv[]){

    FILE *sexta = fopen("sexta.txt", "w");

    if(sexta == NULL){
        printf("erro ao abrir arquivo.");
        return 1;
    }

    fprintf(sexta, "Hello, world!");

    fclose(sexta);

    return 0;
}