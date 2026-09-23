#include <stdio.h>
#define TAM 7

int main() {
    int v[TAM] = {113, 22, 33, 14, 55, 96, 7};
    int maior = v[0], menor = v[0];
    int i;

    for(i = 0; i < TAM; i++) {
        if(v[i] > maior) {
            maior = v[i];
        }
        if(v[i] < menor) {
            menor = v[i];
        }
    }
    printf("Maior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);

    return(0);
}