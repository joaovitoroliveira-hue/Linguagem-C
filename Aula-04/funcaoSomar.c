#include <stdio.h>

int somar(int a, int b){
    int resultado = a + b;
    return resultado;
}

int main(){
    int x = 10, y = 20;
    int resultado = somar(x, y);

    printf("Resultado da Soma = %d\n", resultado);

    return(0);
}
/*

- Acima temos um programa completo que utiliza uma função para somar dois números. Perceba que a função somar()
  é definida fora da função main(), mas é chamada dentro da própria

- O programa chama a função somar(10, 20) e recebe o valor 30 como retorno.

- Sempre que o valor de retorno de uma função for usado dentro da função main(), é necessário atribuirmos esse 
  valor a uma variável da função main()

*/