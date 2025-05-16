#include <stdio.h>

/** 
Declaração de função
A função tem por objetivo: ler um valor dentre 2 opções válidas
A função deve retornar o valor válido lido
**/
int ler_valor_valido(int opcao1, int opcao2, char* texto_opcao1, char* texto_opcao2, char* texto_adicional){
    // Código da função
    int opcao_valida;

    do{
        printf("%s\nEsolha uma opcao:\n%d - %s\n%d - %s\n", texto_adicional, opcao1, texto_opcao1, opcao2, texto_opcao2);
        scanf("%d", &opcao_valida);
    }
    while(opcao_valida != opcao1 && opcao_valida != opcao2);

    return opcao_valida;
} 

int main(int argc, char* argv[]){
    
    int opcao, resposta;
    
    opcao = ler_valor_valido(1, 0, "Iniciar quiz", "Sair", "");

    if(opcao == 1){
        resposta = ler_valor_valido(1, 2, "Rio de Janeiro", "Brasilia", "Qual eh a capital do Brasil?");

        if(resposta == 2){
            printf("Voce acertou!\n");
        }
        else {
            printf("Pode melhorar!\n");
        }

        resposta = ler_valor_valido(3, 4, "Moscow", "Brasilia", "Qual eh a capital do Russia?");

        if(resposta == 3){
            printf("Voce acertou!\n");
        }
        else {
            printf("Pode melhorar!\n");
        }

    }
    

    return 0;
}