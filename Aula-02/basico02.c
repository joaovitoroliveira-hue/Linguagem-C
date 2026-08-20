#include <stdio.h>
#define PI 3.14159 /* "define" é uma diretriva de pré-processador, que permite fazer uma mudança textual antes do código
                     ser compilado, permitindo dar nomes claros a valores fixos em vários pontos do código */

int main(){
    const float raio = 5.0;  //"const" é um modificador de tipo, usado para declarar variáveis que o valor não se altera após
    float area;              // iniciar o programa.

    area = PI * raio * raio;

    printf("Raio: %.2f\n",raio);
    printf("Area: %.2f\n", area);

    return(0);
}