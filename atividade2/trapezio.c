#include <stdio.h>

int main(int argc, char* argv[]){
    
    float B, b, h, A;
    printf("trapezio.c\n");
    printf("Digite o valor da base maior (B): ");
    scanf("%f", &B);
    printf("Digite o valor da base menor (b): ");
    scanf("%f", &b);
    printf("Digite o valor da altura (h): ");
    scanf("%f", &h);
    A = ((B + b)*h)/2;
    printf("A = %.2f\n", A);

    return 0;
}