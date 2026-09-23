#include <stdio.h>
#define TAM 5

int main() {
    float elementos[5];
    float somador = 0;
    float media;
    int i;

    for(i = 0; i < TAM; i++) {
        scanf("%f", &elementos[i]);
        somador += elementos[i];
    }

    media = somador / TAM;
    printf("Media entre os elementos: %.2f", media);

    return(0);
}