#include <stdio.h>
int main(){
    int i;
    float nota, soma = 0;

    for(i = 1; i <= 5; i++){
        printf("Nota do aluno %d: ", i);
        scanf("%f", &nota);

        if(nota >= 6){
            printf("Aluno %d : Aprovado\n\n", i);
        } else {
            printf("Aluno %d : Reprovado\n\n", i);
        }
        soma += nota;
    }
    printf("Media da Sala: %.2f\n", soma/5);

    return(0);
}