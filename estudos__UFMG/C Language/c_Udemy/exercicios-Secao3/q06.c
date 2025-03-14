//Ler a temperatura em Celsius e converter para Fahrenheit
#include <stdio.h>
int main(){
    float c, f;
    printf("Insira uma temperatura em Celsius: ");
    scanf("%f", &c);
    f = ((c*9)/5)+32;
    printf("A temperatura de %0.2f°C vale %0.2f°F.", c, f);
    return 0;
}