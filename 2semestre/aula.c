#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char name[150]; //gasta 150 + 1 (\o) = 151 caracteres
    char phone[14]; // 15 caracteres na memória
    char addres[200]; // 201 caracteres 
} pessoa;

int main() {

    pessoa x;

    strcpy(x.name, "Maria Alves");
    strcpy(x.phone, "(61) 12345-6789");
    strcpy(x.addres, "SHIS 12 25 13");

    printf("%s\t%s\t%s\n", x.name, x.addres, x.phone);


    return 0;
}

