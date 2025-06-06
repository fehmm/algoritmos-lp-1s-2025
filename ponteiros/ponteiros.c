#include <stdio.h>

#define MAX 255

// GLOBAL
int y = 1;

void incrementaX(int *x){
    // LOCAL
    while (*x < 5)
    {
        y++;
        *x = 11;
    }
}

int main(int argc, char* argv[]){

    int z = 1;
    int w = 2;
    incrementaX(&z);
    
    printf("y = %d\n", y);
    printf("z = %d\n", z);

    printf("*z = %p\n", &z);
    printf("*w = %p\n", &w);

    return 0;
}