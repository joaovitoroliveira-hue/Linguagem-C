#include <stdio.h>

int main() {

    /*1. Inicialização completa com lista completa de valores*/
    int idades[5] = {18, 19, 25, 22, 27}; 

    /*2. Inicialização parcial - restante das posições recebe 0 automaticamente*/
    int idades2[5] = {18, 19}; 

    /*3. Sem tamanho o compilador conta os elementos (tamanho = 5)*/
    int idades3[] = {18, 19, 25, 22, 27}; 

    /*4. Zerar todo array, todos os 5 elementos valem 0*/
    int idades4[5] = {0};

    return(0);
}
/*

- Usar '#define TAM 5' para definir o tamanho do array como constante é uma boa prática.
  Isso facilita a manuetnção do código quando o tamanho precisar mudar.

*/