#include <stdio.h>

#define SALARIO_MINIMO 1412.00

int main(){
    const float taxa_imposto = 0.15;
    float salario = 3000.00;
    float imposto, liquido;

    imposto = salario * taxa_imposto;
    liquido = salario - imposto;
    
    printf("Salario bruto: R$ %.2f\n", salario);
    printf("Imposto (15%%): R$ %.2f\n", imposto);
    printf("Salario liquido: R$ %.2f\n", liquido);

    printf("Acima do minimo? %d\n", liquido > SALARIO_MINIMO);
    printf("Entre 2000 e 4000? %d\n", liquido >= 2000 && liquido <= 4000);

    return(0);
}