#include <stdio.h>

int contador = 0;

void incrementar(){
    int passo = 1;
    contador += passo;
    printf("Contador: %d\n", contador);
}

int main(){
    int x = 5;
    incrementar();
    incrementar();
    printf("X = %d\n", x);

    /*printf("%d", passo); - ERRO! passo não existe aqui*/
    return(0);
}