#include <stdio.h> 

int main(int argc, char const *argv[])
{
    int idade = 18;
    float peso = 46.3;
    char sexo = 'F';
    double pagamento = 99.99;

    printf("\n se estou com %d anos, peso %.2f kg e sou do sexo %c, o pagamento da academia sera de %.2lf reais \n" , idade, peso, sexo, pagamento);
    
    return 0;
}
