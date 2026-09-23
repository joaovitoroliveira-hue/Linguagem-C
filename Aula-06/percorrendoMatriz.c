#include <stdio.h>

int main() {
    int mat[3][3];

    printf("Preencha os elementos da Matriz:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nMatriz digitada:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%2d", mat[i][j]);
        }
        printf("\n");
    }

    return(0);
}
/*

- Para percorrer todos os elementos de uma matriz, utilizamos dois laços.

- Como na prática não sabemos os valores na hora de escrever o código, precisamos
  ler do usuário. O padrão é o mesmo: laços aninhados com scanf().

*/