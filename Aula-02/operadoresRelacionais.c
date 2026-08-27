#include <stdio.h>
int main(){
    int nota = 10;
    int media = 6;

    printf("Nota maior que media? %d\n", nota > media);
    printf("Nota igual a 10?      %d\n", nota ==  10);
    printf("Nota menor que 5?     %d\n", nota < 5);
    printf("Aprovado ( >= 6 )?    %d\n", nota >= media);

    return(0);
}
/*

- Os operadores relacionais comparam valores e produzem um resultado lógico
1 (verdadeiro) ou 0 (falso). São fundamentais para tomadas de decião nos programas.

- Considere a = 1 e b = 0, para os exemplos abaixo:

- "==": Igual a             (a == b ---> 0 falso)

- "!=: Diferente de    (a != b ---> 1 verdadeiro)

- ">": Maior que        (a > b ---> 1 verdadeiro)

- "<": Menor que             (a < b ---> 0 falso)

- ">=": Maior ou igual (a >= b ---> 1 verdadeiro)

- "<=": Menor ou igual      (a <= b ---> 0 falso)

*/