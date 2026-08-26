#include <stdio.h>
#define TAM 5
int main(){
    float notas[TAM];
    int i;

    printf("Digite %d notas\n", TAM);
    for(i = 0; i < TAM; i++){
        printf("Nota[%d]:", i + 1);
        scanf("%f", &notas[i]);
    }

    printf("\nNotas digitadas:\n");
    for(i = 0; i < TAM;  i++){
        printf("Aluno %d: %.1f\n", i + 1, notas[i]);
    }

    return(0);
}