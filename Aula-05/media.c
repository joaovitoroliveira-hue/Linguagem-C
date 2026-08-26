#include <stdio.h>
#define TAM 6
int main(){
    float notas[TAM];
    float soma = 0.0, media;
    int i;

    printf("Digite as %d notas:\n", TAM);
    for(i = 0; i < TAM; i++){
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
    }

    media = soma / TAM;
    printf("\nMedia da Turma: %.2f\n", media);

    if(media >= 7.0){
        printf("Turma Aprovada!\n");
    }
    else {
        printf("Turma Reprovada!\n");
    }
    return(0);
}