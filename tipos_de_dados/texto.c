#include <stdio.h>
#include <string.h>

#define TAM 255

int main(int argc, char const *argv[]){


   // declaração de strings 
   char palavra1[] = "conhecimento";
   char palavra2[] = {'c', 'o', 'n', 'h', 'e', 'c', 'i', 'm', 'e', 'n', 't', 'o', '\0'};
   char frase1[TAM];
   char palavra3[TAM];
   char palavra4[TAM];
   char palavra5[TAM];


   printf("%s\n", palavra1);
   printf("%s\n", palavra2);

   printf("palavra2[4] = %c\n", palavra2[4]);

   // leitura segura de strings 

   printf("digite uma frase: ");
   fgets(frase1, TAM, stdin);

   printf("%s\n", frase1);

    printf("digite uma palavra: ");
    fflush(stdin);
   fgets(palavra3, TAM, stdin);


   printf("digite outra palavra: ");
   fflush(stdin);
   fgets(palavra4, TAM, stdin);


  if(strcmp(palavra3, palavra4) == 0){
    printf("As palavras sao iguais\n");
  }
  else{
    printf("As palavras NAO sao iguias\n");
  }

  printf("Tamanho da palavra3 eh: %d\n", strlen(palavra3));

  for(int i = 0; i <strlen(palavra3); i++){
    printf("\n%c\n", palavra3[i]);
// imprimir ao contrario

for(int i = strlen(palavra3)-1; i >=0; i--){
    printf("\n%c", palavra3[i]);
}
// imprimir palavra 3 e 4 contatenada 
strcat(palavra3, palavra4);
printf("palavra 3 contatenada = %s", palavra3);
  }
    return 0;
}
