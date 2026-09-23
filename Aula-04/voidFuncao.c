#include <stdio.h>

void tentarDobrar(int n){
    n *= 2;
    printf("Valor de 'n' dentro da funcao tentarDobrar(void): %d\n", n);
}

int main(){
    int n = 10;

    printf("Valor de 'n' dentro da funcao main(): %d\n", n);
    tentarDobrar(n);

    return(0);
}
/*

- Quando uma funcao não precisa devolver nenhum valor usamos o tipo void();

- Passagem de parâmetros por valor: Em C os parâmtros são passados por valor, ou seja, a função recebe uma
  cópia da variável original. Alterar o parâmetro dentro da função não altera a variável fora dela.

- No programa acima:
  'n = 10' é copiado para o parâmetro 'n';
  Dentro da função 'n' vira 20, mas a variável original se mantém com o valor inicial (10).

*/