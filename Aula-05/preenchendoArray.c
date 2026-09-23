#include <stdio.h>
#define TAM 5

int main() {
    float notas[TAM];
    int i;

    /*Leitura dos valores*/
    for(i = 0; i < TAM; i++) {
        printf("Nota %d\n", i + 1);
        scanf("%f", &notas[i]);
    }

    /*Exibindo valores lidos*/
    for(i = 0; i < TAM; i++) {
        printf("Nota %d = %.2f\n", i + 1, notas[i]);
    }

    return(0);
}