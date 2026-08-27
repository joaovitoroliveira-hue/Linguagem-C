#include <stdio.h>

#define FRETE 15.90
int main(){
    float preco, percentual_desconto, desconto, final, total;
    float frete_gratis = 150.0;

    printf("Preco: \n");
    scanf("%f", &preco);
    printf("Percentual de Desconto: \n");
    scanf("%f", &percentual_desconto);

    desconto = preco * (percentual_desconto / 100.0);
    final = preco - desconto;

    if(final > frete_gratis){
        total = final;
        printf("Voce tem frete gratis!\n");
        printf("Valor do produto: R$%.2f\n", preco);
        printf("Valor do desconto: R$%.2f\n", desconto);
        printf("Preco pago: R$%.2f\n", total);
    }
    else {
        total += FRETE;
        printf("Voce nao tem frete gratis!\n");
        printf("Valor do produto: R$%.2f\n", preco);
        printf("Valor do desconto: R$%.2f\n", desconto);
        printf("Preco pago: R$%.2f\n", total);
    }
    
    return(0);
}