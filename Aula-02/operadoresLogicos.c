#include <stdio.h>
int main(){
    int idade = 18;
    float nota = 7.5;

    if(idade >= 18 && nota >= 7.0){
        printf("Aluno aprovado para matrícula!\n");
    }

    if(idade < 18 || nota < 5.0){
        printf("Aluno não pode se matricular!\n");
    }

    int reprovado = !(nota >= 5.0);
    printf("Esta reprovado? %d\n", reprovado);
    
    return(0);
}
/*

- Os operadores lógicos premitem combinar duas ou mais condições para formar
expressões mais complexas. São essenciais quando uma decisão depende de múltiplos
critérios ao mesmo tempo

- "&&" E lógico (AND): Resultado é verdadeiro somente se ambas as condições forem verdadeiras

- "||" OU lógico (OR): Resultado é verdadeiro se pelo menos uma das condições forem verdadeiras

- "!" NÃO lógico (NOT): Inverte o resultado de uma condição (verdadeiro vira falso, falso vira verdadeiro)


*/