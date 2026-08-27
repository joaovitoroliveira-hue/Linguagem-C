#include <stdio.h>
int main(){
    int x = 5;
    int y, z;

    y = ++x;
    z = x++;
    
    printf("Pre-Fixado: %d", y);
    printf("Pos-Fixado: %d", z);
    
    return(0);
}
/*

- O operador de atribuição em C é o "=". Além dele, C oferece operadores compostos
que combinam uma operação aritmética com a atribuição.

- "=": Atribuição Simples

- "+=": x = x + valor

- "-=": x = x - valor

- "*=": x = x * valor

- "/=": x = x / valor

- "%=": x = x % valor








*/