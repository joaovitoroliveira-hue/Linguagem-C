#include <stdio.h>
#define TAM 5

int main(){
    float numeros[5];
    int i;
    int soma = 0;

    printf("Numeros a serem somados:\n");
    for(i = 0; i < TAM; i++) {
        scanf("%f", &numeros[i]);
    }

    for(i = 0; i < TAM; i++) {
        soma += numeros[i];
    }
    printf("Resultado da soma dos elementos: %d", soma);

    return(0);
}