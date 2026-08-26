#include <stdio.h>
#define TAM 6
int main(){
    int numeros[TAM] = {15, 42, 7, 89, 23, 55};
    int busca, i, encontrado = 0;

    printf("Qual numero deseja buscar? ");
    scanf("%d", &busca);

    for(i = 0; i < TAM; i++){
        if(numeros[i] == busca){
            printf("Encontramos na posicao %d!\n", i);
            encontrado = 1;
            break;
        }
    }
    if(!encontrado){
        printf("Numero nao encontrado\n");
    }

    return(0);
}