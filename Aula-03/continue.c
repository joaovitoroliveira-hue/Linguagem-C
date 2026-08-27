#include <stdio.h>
int main(){
    int i;
    int alvo = 7;

    for(i = 1; i <= 10; i++){
        if(i % 2 == 0){
            continue; // Vai pular os números pares
        }
        printf("%d\n", i);
    } 
    return(0);
}
/*

- O continue não encerra o laço, ele apenas pula o restante da iteração atual e vai direto
para próxima verificação de condição. Perfeito para ignorar casos específicos.

- Quando o C encontra o continue, ele ignora o restante do bloco naquela volta e já vai para
a próxima iteração.

- break sai do laço e continue apenas pula aquela volta e continua o laço.

*/