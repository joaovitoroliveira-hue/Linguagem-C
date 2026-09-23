#include <stdio.h>

int main() {
    int mat[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int matT[3][2]; // Transposta (3 linhas e 2 colunas)

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            matT[j][i] = mat[i][j]; // Realiza a troca de i e j
        }
    }

    printf("\nMatriz Original:\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz Transposta:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%4d", matT[i][j]);
        }
        printf("\n");
    }

    return(0);
}
/*

- A transposta de uma matriz troca linhas por colunas. Se a matriz original tem dimensão MxN, a sua transposta
  vai ter uma dimensão NxM. Isso é uma operação fundamental em álgebra linear e processamento de dados.

*/