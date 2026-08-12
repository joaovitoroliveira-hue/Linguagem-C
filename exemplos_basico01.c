#include <stdio.h>
int main(){
    char letra;
    float preco;

    printf("Digite uma letra qualquer: ");
    scanf("%c", &letra);
    printf("Digite um valor qualquer: ");
    scanf("%f", &preco);

    printf("A letra digitada foi: %c\nO preco digitado foi: %.2f", letra, preco);
    return(0);
}
/*
 
    * char/float: char armazena letras e float armazena numeros de ponto flutuante.

    * %c: formatação para char tanto no printf() quanto no scanf().

    * %.2f: formatação que limita duas casas decimais tanto no printf() quanto no scanf().

*/