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