#include <stdio.h>

int main(){
    int nota;
    printf("Digite sua nota: ");
    scanf("%d", &nota);

    if(nota >= 9){
        printf("Conceito A: Excelente\n");
    } else if (nota >= 7) { 
        printf("Conceito B: Bom\n");
    } else if (nota >= 5) {
        printf("Conceito C: Regular\n");
    } else {
        printf("Reprovado: Estude Mais\n");
    }

    return(0);
}
/*

- Quando há mais de dois casos possíveis, usamos "else if" para decidir entre múltiplas
verificações. O programa vai testar cada condição em ordem e executa o primeiro bloco que 
for verdadeiro.

*/