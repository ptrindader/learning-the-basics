//Ler, somar e imprimir 3 números inteiros
#include <stdio.h>
int main(){
    int x, y, z, soma;
    printf("Digite 3 números: ");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    soma = x + y + z;
    printf("A soma dos números é %d.", soma);
    return 0;
}