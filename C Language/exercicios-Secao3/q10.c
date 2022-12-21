//Leia uma velocidade em km/h e converta para m/s
#include <stdio.h>
int main(){
    float kmh, ms;
    printf("Insira uma velocidade em km/h: ");
    scanf("%f", &kmh);
    ms = kmh/3.6;
    printf("A velocidade de %0.2f km/h equivale a %0.2f m/s.", kmh, ms);
    return 0;
}