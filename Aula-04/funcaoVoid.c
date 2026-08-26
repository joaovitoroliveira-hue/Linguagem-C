#include <stdio.h>
void tentarDobrar(int n){
    n = n * 2;
    printf("Dentro da Funcao: %d\n", n);
}
int main(){
    int valor = 10;
    tentarDobrar(valor);
    printf("Fora da Funcao: %d\n", valor);
     
    return(0);
}