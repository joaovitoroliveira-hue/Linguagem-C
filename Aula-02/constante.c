#include <stdio.h>

#define PI 3.14159

int main(){
    const float raio = 4.5;
    float area;

    area = PI * raio * raio;

    printf("Raio: %.2f\n", raio);
    printf("Area da Circunferencia: %.2f\n", area);

    return(0);
}
/*

- Uma constante é um valor que NÃO PODE SER ALTERADO durante a execução do programa.

- Pode ser declarada usando #define ou a palavra-chave const.

- #define: É uma diretiva de pré-processador, que define um nome simbólico antes da compilação. NÃO OCUPA MEMÓRIA!

- const: Cria uma variável somente-leitura com tipo definido. OCUPA MEMÓRIA!

- Usar o const é bom para garantir um tipo específico e o #define para valores globais simples, como limites e nomes de configuração

*/