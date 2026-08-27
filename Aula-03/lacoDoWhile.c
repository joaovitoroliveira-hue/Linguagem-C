#include <stdio.h>
int main(){
    int opcao;

    do{
        printf("Opcao 1: Jogar\n");
        printf("Opcao 2: Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if(opcao == 1){
            printf("Jogando...\n");
        }
    } while(opcao != 2);
    
    return(0);
}
/*

- O "do-while" garante que o bloco execute pelo menos uma vez, pois a condição é
verificada depois da execução. Perfeito para menus e validação da entrada do usuário.

*/