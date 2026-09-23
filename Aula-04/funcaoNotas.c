#include <stdio.h>

float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3.0;
}

void exibirSituacao(float media) {
    if (media >= 7) {
        printf("Situacao: Aprovado!!!\n");
    }
    else if (media >= 5.0) {
        printf("Situacao: Recuperacao!!!\n");
    }
    else {
        printf("Situacao: Reprovado!!!\n");
    }
}

void processarAluno(char* nome, float n1, float n2, float n3) {
    float media = calcularMedia(n1, n2, n3);
    printf("\nAluno: %s\n", nome);
    printf("Media: %.2f\n", media);
    exibirSituacao(media);
}

int main() {
    processarAluno("Ana", 8.0, 7.5, 9.0);
    processarAluno("Bruno", 4.0, 6.0, 5.5);
    processarAluno("Carla", 3.0, 4.0, 2.5);

    return(0);
}