#include <stdio.h>

int main() {
    int mat[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int somador = 0;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++){
            somador += mat[i][j];
        }
    }
    printf("Soma de todos os elementos da Matriz: %d\n", somador);

    return(0);
}