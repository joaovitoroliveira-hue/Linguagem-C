#include <stdio.h>
#define L 3 
#define C 3

int main(){
    int mat[L][C] = {
        {1, 2, 3},      //Linha 0
        {5, 6, 7},      //Linha 1
        {9, 10, 11}     //Linha 2
    };

    for(int i = 0; i < L; i++){
        int somaLinha = 0;
        for(int j = 0; j < C; j++){
            somaLinha += mat[i][j]; 
        } 
        printf("Soma da linha %d = %d\n", i, somaLinha);
    }

    return(0);
}