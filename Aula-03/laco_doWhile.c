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