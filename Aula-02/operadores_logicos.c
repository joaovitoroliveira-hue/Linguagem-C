#include <stdio.h>
int main(){
    int idade = 10;
    float nota = 7.5;

    if(idade >= 18 && nota >= 7.0){                 // Operador lógico AND && (exige que ambas condições sejam verdadeiras)
        printf("Aluno aprovado para matrícula!\n");
    }

    if(idade < 18 || nota < 5.0){                   // Operador lógico OR || (exige que apenas uma das condições seja verdadeira)
        printf("Aluno nao pode se matricular!\n");
    }


    int reprovado = !(nota >= 5.0);                 // Operador lógico NOT ! (inverte o valor )
    printf("Esta reprovado? %d\n", reprovado);
    
    return(0);
}
