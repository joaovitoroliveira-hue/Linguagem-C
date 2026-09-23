#include <stdio.h>
#define TAM 6

int main() {
    int array[TAM] = {15, 30, 45, 50, 55, 60};
    int busca, i;
    int encontrado = 0;

    printf("Digite o numero que deseja buscar:\n");
    scanf("%d", &busca);

    for(i = 0; i < TAM; i++) {
        if(busca == array[i]) {
            printf("Encontrado na posicao (%d)", i);
            encontrado = 1;
            break;
        }
    }

    if(!encontrado) {
        printf("Numero nao encontrado\n");
    }

    return(0);
}