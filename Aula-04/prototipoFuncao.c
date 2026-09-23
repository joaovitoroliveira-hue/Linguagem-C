#include <stdio.h>
//Protótipos; Declarando antes da função main()
int somar(int a, int b);
void imprimirMensagem(void);

int main() {
    imprimirMensagem();
    printf("Resultado: %d", somar(5, 3));

    return(0);
}
//Definições; Podem vir depois da função main()
int somar(int a, int b){
    return a + b;
}
void imprimirMensagem(void){
    printf("Calculando...\n");
}
/*

- Por que usar Protótipos? Sem os protótipos, o compilador exige que você defina as funções antes de usá-las,
  algo que pode tornar o código confuso. Com protótipos o programa fica mais organizado e mais claro.

- A organização feita acima é a forma recomendada na Linguagem C; protótipos no topo, definições no final.
  Facilitando a leitura e evitando erros de compilação.

*/