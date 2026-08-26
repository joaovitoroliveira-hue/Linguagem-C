#include <stdio.h>
#define TAM 5

int main(){
    int numero [TAM] = {10, 20, 30, 40, 50};
    int i;

    printf("Elementos do array: \n");
    for(i = 0; i < TAM; i++){
        printf("Array[%d] = %d\n", i, numero[i]);
    }

    return(0);
}