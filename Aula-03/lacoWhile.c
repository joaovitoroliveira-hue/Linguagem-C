#include <stdio.h>
int main(){
    int i = 5;

    while(i > 0){
        printf("%d\n", i);
        i--;
    }
    printf("Lancar!!!\n");

    return(0);
}
/*

- Laços de repetição, permitem que um bloco de código seja executado várias vezes sem que
seja preciso compilá-lo. Em C temos estruturas de repetição: while, do-while e for. Cada uma
com um uso ideal dependendo do problema.

- O "while" repete o bloco enquanto a condição for verdadeira. A condição é verificada antes
de cada execução. Se já começar falsa, o laço nunca executará.

- É necessário sempre atualizar a variável de controle, pois se a condição nunca se tornar falsa
o programa entrará em loop infinito

*/