#include <stdio.h>

int main(){
    int dia = 3;
    
    switch (dia) {
        case 1: printf("Sef\n"); break;
        case 2: printf("Ter\n"); break;
        case 3: printf("Qua\n"); break;
        case 4: printf("Qui\n"); break;
        case 5: printf("Sex\n"); break;
        default: printf("Final de Semana\n");
    }
    return(0);
}
/*

- O switch é ideal quando queremos comparar uma MESMA VARIÁVEL com valores inteiros ou caracteres.
É mais legível que uma longa cadeia de else if nesses casos.

- O break é essencial, sem ele o C continua executando os casos seguintes.

- É recomendado o uso de if / elseif: 

As condições envolvem intervalos (nota >= 7)
Comparações com float ou expressões complexas
Condições diferentes entre si
Poucos casos (2 ou 3)

- É recomendado o uso do switch:

Comparar uma variável com valores fixos
Trabalhar com inteiros ou caracteres
Muitos casos bem definidos (menu, dias, oções)
Ter um código mais organizado e legível

- O break encerra imediatamente o laço ou o switch, pulando para a linha após o bloco (ele sai imediatamente, sem verificar a condição de novo). 
Útil quando encontramos o que buscamos e não precisamos mais continuar.

*/