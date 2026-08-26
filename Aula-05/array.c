#include <stdio.h>
int main(){
    int notas [4] = {75, 90, 60, 85};

    printf("Primeira Nota: %d \n", notas[0]);
    printf("Ultima Nota: %d \n", notas[3]);

    notas[2] = 70;
    printf("Nova Nota: %d \n", notas[2]);

    return(0);
}