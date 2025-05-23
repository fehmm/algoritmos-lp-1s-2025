#include <stdio.h> 

int main(int argc, char const *argv[])
{
    int a, b, soma, subt, div, mult, n;

    printf("CALCULOS RAPIDOS \n");
    
    printf("digite um numero \n");
    scanf("%d",  &a);

    printf("digite o segundo numero \n");
    scanf("%d",  &b);

    soma = a + b;
    subt = a - b;
    mult = a*b;
    div = a/b; 

    if( b != 0 ){
        div = a / b;
    } 

    printf ("escolha seu calculo \n");
    printf("1 - soma \n 2 - subtracao \n 3 - multiplicacao \n 4 - divisao \n");
    scanf("%d", &n);

        if (n == 1){
            printf("a soma e: %d \n", soma);
        }else if (n == 2){
                printf("a subtracao e: %d\n", subt);
            }else if( n == 3){
                printf("a multiplicacao e: %d\n", mult);
            } 
        

    return 0;
      }

