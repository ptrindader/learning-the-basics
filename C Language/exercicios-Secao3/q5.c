//Ler e imprimir a quinta parte de um número Real
#include <stdio.h>
int main(){
    float x, x5;
    printf("Insira um número: ");
    scanf("%f", &x);
    x5 = x/5;
    printf("O número %f dividido por 5 é igual a %f.", x, x5);
    return 0;
} 