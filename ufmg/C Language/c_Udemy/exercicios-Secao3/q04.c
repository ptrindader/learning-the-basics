//Ler e imprimir o quadrado de um inteiro
#include <stdio.h>
int main(){
    int x, x2;
    printf("Insira um número: ");
    scanf("%d", &x);
    x2 = x*x;
    printf("O número %d ao quadrado é igual a %d.", x, x2);
    return 0;
}