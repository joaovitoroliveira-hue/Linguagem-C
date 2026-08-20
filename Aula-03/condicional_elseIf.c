#include <stdio.h>

int main(){
    int nota;
    printf("Digite sua nota: ");
    scanf("%d", &nota);

    if(nota >= 9){
        printf("Conceito A: Excelente\n");
    } else if (nota >= 7) { // Quando há mais de dois casos possíveis utilizamos else if para escolhermos entre múltiplas verificações
        printf("Conceito B: Bom\n");
    } else if (nota >= 5) {
        printf("Conceito C: Regular\n");
    } else {
        printf("Reprovado: Estude Mais\n");
    }

    return(0);
}