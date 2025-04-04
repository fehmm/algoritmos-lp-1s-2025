#include <stdio.h>

int main(int argc, char* argv[]){

    float L, A;
    printf("quadrado.c\n");
    printf("Digite o valor do lado (L): ");
    scanf("%f", &L);
    A = L * L;
    printf("A = %.2f\n", A);

    return 0;