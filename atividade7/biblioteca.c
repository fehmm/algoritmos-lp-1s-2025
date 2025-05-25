#include <stdio.h>

int maior2(int a, int b) {
    return (a > b) ? a : b;
}

int maior3(int a, int b, int c) {
    int maior_ab = maior2(a, b);
    return maior2(maior_ab, c);
}

int menor2(int a, int b) {
    return (a < b) ? a : b;
}

int menor3(int a, int b, int c) {
    int menor_ab = menor2(a, b);
    return menor2(menor_ab, c);
}