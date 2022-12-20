//Ler a temperatura em Fahrenheit e converter para Celsius
#include <stdio.h>
int main(){
    float c, f;
    printf("Insira uma temperatura em Fahrenheit: ");
    scanf("%f", &f);
    c = ((f-32)*5)/9;
    printf("A temperatura de %0.2f°F vale %0.2f°C.", f, c);
    return 0;
}