#include <stdio.h>
#define TAM 5

int main() {
    int numeros[TAM] = {10, 20, 30, 40, 50};
    int i;

    printf("Percorrendo elementos do array:\n");
    for(i = 0; i < TAM; i++) {
        printf("%d\n", numeros[i]);
    }

    return(0);
}
/*

- A forma mais comum de percorrer um array, é utilizando o laço 'for', com uma variável de controle como
  índice. Isso nos permite processar todos os elementos do array de forma automática.

*/