#include <stdio.h>
int main(){
    int i;
    for(i = 1; i<= 5; i++){
        printf("Repeticao numero: %d\n", i);
    }

    return(0);
}
/*

- O for é laço mais usado quando sabemos exatemente quantas vezes queremos repetir.
Ele reúne em uma linha: inicialização, condição e atualização.

- for: Número de repetições conhecido (percorrer um array, tabuada, contar de 1 até N...)

- while: Repete enquanto condição for verdadeira (Leitura de arquivo, aguardar entrada válida...)

- do-while: Executa ao menos uma vez (Menu de opções, validação de dados...)

*/