#include <stdio.h>

int somar(int a, int b){
    int resultado = a + b;
    return(resultado);
}
int multiplicacao(int a, int b){
    int resultado = a * b;
    return(resultado);
}
int subtracao(int a, int b){
    int resultado = a - b;
    return(resultado);
}
int divisao(int a, int b){
    int resultado = a / b;
    return(resultado);
}

int main(){
    int x = 20, y = 10;
    int resultado  = somar(x, y);
    int resultado1 = subtracao(x, y);
    int resultado2 = divisao(x, y);
    int resultado3 = multiplicacao(x, y);


    printf("Soma: %d\n", resultado);
    printf("Subtracao: %d\n", resultado1);
    printf("Divisao: %d\n", resultado2);
    printf("Multiplicacao: %d\n", resultado3);

    return(0);
}