/*
- Uma turma tem 3 alunos e cada aluno fez 3 provas. Armazene as notas em uma matriz 3x3.
  Calcule e exiba: (1) a média de cada aluno (por linha) e (2) a maior nota da turma.
  
 - Resolução abaixo: 
 */
#include <stdio.h>
#define L 3
#define C 3

int main() {
    float notas[L][C];
    float media = 0;

    printf("Notas dos 3 alunos:\n");
    for(int i = 0; i < L; i++) {
        for(int j = 0; j < C; j++){
            scanf("%f", &notas[i][j]);
        }
    }
    
    float maior = notas[0][0];

    for(int i = 0; i < L; i++) {
        int somaLinha = 0;
        for(int j = 0; j < C; j++) {
            somaLinha += notas[i][j]; 
        } 
        media = (float)somaLinha / 3.0; 
        printf("Media do aluno %d = %.1f\n", i + 1, media);
    }

    for(int i = 0; i < L; i++) {
        for(int j = 0; j < C; j++) {
            if(notas[i][j] > maior) {
                maior = notas[i][j];
            }
        }
    }
    printf("Maior nota da turma: %.1f", maior);

    return(0);
}