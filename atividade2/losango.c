#include <stdio.h>

int main(int argc, char* argv[]){
    float D, d, A;
    printf("losango.c\n");
    printf("Digite o valor da diagonal maior (D): ");
    scanf("%f", &D);
    printf("Digite o valor da diagonal menor (d): ");
    scanf("%f", &d);
    A = (D * d)/2;
    printf("A = %.2f\n", A);
    return 0;
}