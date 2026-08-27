#include <stdio.h>
int main(){
    int a = 10, b = 3;
    float x =10.0, y = 3.0;

    printf("Adicao:          %d\n", a + b); 
    printf("Subtracao:       %d\n", a - b);  
    printf("Multiplicacao:   %d\n", a * b);  
    printf("Divisao int:     %d\n", a / b);  
    printf("Divisao real:  %.2f\n", x / y);  
    printf("Modulo:          %d\n", a % b);  

    return(0);
}
/*

- "+": Operador de Adição; 10 + 3 = 13

- "-": Operador de Subtração; 10 - 3 = 7

- "*": Operador de Multiplicação; 10 * 3 = 30

- "/": Operador de Divisão; 10 / 3 = 3 (trunca números de divisão inteira)

- "%": Operador de Módulo (Resto da Divisão); 10 % 3 = 1

- A divisão entre dois números inteiros em C descarta a parte decimal, para isso é utilizado float ou double quando
for desejado o resultado com a parte fracionária

*/