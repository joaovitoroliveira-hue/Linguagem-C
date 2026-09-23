#include <stdio.h>
#include "matematica.h"

int main(){
    int x = 10, y = 4;

    printf("Soma: %d\n", somar(x, y));
    printf("Subtracao: %d\n", subtrair(x, y));
    printf("Media: %.1f\n", media(x, y));
}