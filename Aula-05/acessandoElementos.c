#include <stdio.h>

int main() {
    int notas[4] = {75, 90, 60, 85};

    /*Lendo e Imprimindo elementos individuais*/
    printf("Primeiro elemento: %d\n", notas[0]);
    printf("Ultimo elemento: %d\n", notas[3]);

    /*Modificando elementos individualmente e imprimindo*/
    notas[2] = 70;
    notas[3] = 55;
    printf("Novo valor no indice 2: %d\n", notas[2]);
    printf("Novo valor no indice 3: %d\n", notas[3]);

    return(0);
}