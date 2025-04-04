#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){
    float r, A;
    printf("circulo.c\n");
    printf("Digite o valor do raio (r): ");
    scanf("%f", &r);
    A = M_PI * powf(r, 2);
    printf("A = %.2f\n", A);
    return 0;
}