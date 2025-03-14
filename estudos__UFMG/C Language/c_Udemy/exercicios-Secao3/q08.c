//Ler a temperatura em Kelvin e converter para Celsius
#include <stdio.h>
int main(){
    float k, c;
    printf("Insira a temperatura em Kelvin: ");
    scanf("%f", &k);
    c = k - 273.15;
    printf("A temperatura de %0.2fK vale %0.2f°C.", k, c);
    return 0;
}
