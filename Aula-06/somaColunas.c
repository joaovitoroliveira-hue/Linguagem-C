#include <stdio.h>
#define L 3 
#define C 3

int main(){
    int mat[L][C] = {
        {1, 2, 3},      
        {5, 6, 7},      
        {9, 10, 11}
/*       0   1   2       */     
    };

    for(int j = 0; j < C; j++){
        int somaColuna = 0;
        for(int i = 0; i < L; i++){
            somaColuna += mat[i][j]; 
        } 
        printf("Soma da coluna %d = %d\n", j, somaColuna);
    }

    return(0);
}