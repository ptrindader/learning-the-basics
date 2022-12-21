//Leia uma velocidade em m/s e converta para km/h
#include <stdio.h>
int main(){
    float kmh, ms;
    printf("Insira uma velocidade em m/s: ");
    scanf("%f", &ms);
    kmh = ms * 3.6;
    printf("A velocidade de %.2f m/s equivale a %.2f km/h.", ms, kmh);
    return 0;
}