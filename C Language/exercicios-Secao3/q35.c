//Calcular a hipotenusa do triângulo a partir dos catetos.
#include <stdio.h>
#include <math.h>
int main(){
    int a, b;
    float c;
    printf("Insira o valor do primeiro cateto: ");
    scanf("%d", &a);
    printf("Insira o valor do segundo cateto: ");
    scanf("%d", &b);
    c = sqrt(pow(a, 2)+pow(b, 2));
    printf("A hipotenusa tem valor %.3f.", c);
    return 0;
}