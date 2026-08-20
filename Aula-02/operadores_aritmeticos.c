#include <stdio.h>
int main(){
    int a = 10, b = 3;
    float x =10.0, y = 3.0;

    printf("Adicao:          %d\n", a + b);  // Operador de adição
    printf("Subtracao:       %d\n", a - b);  // Operador de subtração
    printf("Multiplicacao:   %d\n", a * b);  // Operador de multiplicação
    printf("Divisao int:     %d\n", a / b);  // Operador de divisão inteira (trunca)
    printf("Divisao real:  %.2f\n", x / y);  // Operador de divisão real
    printf("Modulo:          %d\n", a % b);  // Operador de resto da divisão

    return(0);
}