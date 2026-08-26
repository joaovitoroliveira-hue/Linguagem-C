#include <stdio.h>
int main(){
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("A idade digitada foi: %d anos", idade);

    return(0);
}
/*

- scanf(): Lê dados digitados pelo teclado.

- &: Esse símbolo indica o endereço de memóriada variável,
ou seja, onde o dado lido será armazenado (É obrigatório no scanf)

- Especificador de Formato: informa ao printf e scanf que tipo de dado será lido ou exibido.
O especificador de formato deve sempre estar alinhado ao tipo da variável declarada
  %d - Números inteiros (int)
  %f - Números reais (float)
  %c - Caracteres simples (char)
  %s - Cadeia de caracteres (string)

*/