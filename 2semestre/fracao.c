#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// definição 

typedef struct
{
    int numerador;
    int denominador;

}fracao;

fracao criarfracao(int N, int D) {
fracao F;
F.numerador = N;
F.denominador = D;
return F;
}

int main()
{
 
 fracao F1 = criarfracao(7,2);
 printf("o valor de F1 E %f.\n",(float) F1.numerador/F1.denominador);
    return 0;
}

