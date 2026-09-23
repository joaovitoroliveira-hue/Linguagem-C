#include <stdio.h>
#define TAM 8

int main() {
    float notas[TAM] = {8.5, 4.0, 7.0, 6.5, 9.0, 3.5, 7.5, 5.0};
    int aprovados = 0, reprovados = 0;
    int i;
    float taxaAprovacao;

    for(i = 0; i < TAM; i++) {
        if(notas[i] >= 7) {
            aprovados++;
        } else { 
            reprovados++;
        }
    }
    taxaAprovacao = ((float)aprovados / TAM) * 100;
    printf("Quantidade de reprovados: %d\n", reprovados);
    printf("Quantidade de aprovados: %d\n", aprovados);
    printf("Taxa de Aprovacao: %.2f %%", taxaAprovacao);

    return(0);
}