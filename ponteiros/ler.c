-#include <stdio.h>

#define MAX_TXT 256

int main(int argc, char* argv[]){

    char texto[MAX_TXT];
    FILE *sexta = fopen(argv[1], "r");

    if(sexta == NULL){
        printf("erro ao abrir arquivo");
        return 1;
    }

    while(fgets(texto, MAX_TXT, sexta)){
        fprintf(stdout, texto);
    }
    

    fclose(sexta);

    return 0;
}