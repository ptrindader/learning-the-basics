//Leia uma velocidade em km/h e converta para m/s
#include <stdio.h>
int main(){
    float kmh, ms;
    print("Insira uma velocidade em km/h: ");
    scanf("%f", &kmh);
    printf("A velocidade de %0.2fkm/h equivale a %0.2fm/s.");
    return 0;
}