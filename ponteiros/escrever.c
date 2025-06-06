#include <stdio.h>
#include <string.h>

#define MAX_TXT 256

int main(int argc, char* argv[]){

    char texto[MAX_TXT];
    FILE *arq = fopen(argv[1], "w");

    if(arq == NULL){
        printf("erro ao abrir arquivo");
        return 1;
    }
    strcat(texto, argv[2]);
    strcat(texto, "\n");
    fprintf(arq, texto);

    fclose(arq);

    return 0;
}