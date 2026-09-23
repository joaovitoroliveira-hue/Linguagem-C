#include <stdio.h>

int main() {
    int diag = 0;
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    float mediaLinha = 0;

    for(int i = 0; i < 3; i++) {
        diag += mat[i][i];
    }
    printf("Soma da digonal Principal:\n%d", diag);

    return(0);
}