#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){
    
    char opcao;
    float r, D, d, L, b, h, B, A;

    printf("area.c\n");
    printf("Escolha uma opcao: \n");
    printf("c - Circulo\n");
    printf("l - Losango\n");
    printf("q - Quadrado\n");
    printf("r - Retangulo\n");
    printf("t - Triangulo\n");
    printf("z - Trapezio\n");

    scanf("%c", &opcao);

    switch(opcao){

        case 'c':
            printf("Circulo\n");
            printf("Digite o valor do raio (r): ");
            scanf("%f", &r);
            A = M_PI * powf(r, 2);
            break;
        case 'l':
            printf("Losango\n");
            printf("Digite o valor da diagonal maior (D): ");
            scanf("%f", &D);
            printf("Digite o valor da diagonal menor (d): ");
            scanf("%f", &d);
            A = (D * d)/2;
            break;
        case 'q':
            printf("Quadrado\n");
            printf("Digite o valor do lado (L): ");
            scanf("%f", &L);
            A = L * L;
            break;
        case 'r':
            printf("Retangulo\n");
            printf("Digite o valor da base (b): ");
            scanf("%f", &b);
            printf("Digite o valor da altura (h): ");
            scanf("%f", &h);
            A = b * h;
            break;
        case 't':
            printf("Triangulo\n");
            printf("Digite o valor da base (b): ");
            scanf("%f", &b);
            printf("Digite o valor da altura (h): ");
            scanf("%f", &h);
            A = (b * h)/2;
            break;
        case 'z':
            printf("Trapezio\n");
            printf("Digite o valor da base maior (B): ");
            scanf("%f", &B);
            printf("Digite o valor da base menor (b): ");
            scanf("%f", &b);
            printf("Digite o valor da altura (h): ");
            scanf("%f", &h);
            A = ((B + b)*h)/2;
            break;
        default:
            printf("Opcao invalida\n");
            A = 0;
            break;
    }
    printf("A = %.2f\n", A);
    return 0;
}