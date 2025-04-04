#include <stdio.h>

int main(int argc, char* argv[]){
    float b, h, A;
    printf("triangulo.c\n");
    printf("Digite o valor da base (b): ");
    scanf("%f", &b);
    printf("Digite o valor da altura (h): ");
    scanf("%f", &h);
    A = (b * h)/2;
    printf("A = %.2f\n", A);
    return 0;
}