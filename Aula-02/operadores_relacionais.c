#include <stdio.h>
int main(){
    int nota = 75;
    int media = 60;

    printf("Nota maior que media?  %d\n", nota > media);  // A saída será 1 para o que for verdadeiro e 0 para falso.
    printf("Nota igual a 75?       %d\n", nota == 75);
    printf("Nota menor que 50?     %d\n", nota < 50);
    printf("Aprovado (>=60)?       %d\n", nota >= media);

    return(0);
}