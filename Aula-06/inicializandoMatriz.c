#include <stdio.h> 

int main() {
    int mat[3][3];  // valores indefinidos! (Sem inicialização)
    
    int mat2[2][3] = { // inicialização direta! (Atribuindo valores a cada posição da matriz 2x3)
        {1, 2, 3},
        {4, 5, 6}
    } ;

    int mat3[3][3] = { // Inicialização linha a linha (Matriz Iddentidade)
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };

    int mat4[4][4] = {0}; // Inicialização com zero (Todos os elementos da matriz valem 0)

    return(0);
}
/*

- Sempre inicialize uma matriz antes de utilizá-la, valores não inicializados podem causar bugs,
  difíceis de encontrar.

*/