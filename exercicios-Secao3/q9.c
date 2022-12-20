//Ler a temperatura em Kelvin e converter para Celsius
#include <stdio.h>
int main(){
    float k, c;
    printf("Insira a temperatura em Celsius: ");
    scanf("%f", &c);
    k = c + 273.15;
    printf("A temperatura de %0.2f°C vale %0.2fK.", c, k);
    return 0;
}
