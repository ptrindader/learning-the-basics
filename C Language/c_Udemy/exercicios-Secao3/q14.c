//Leia um âgulo em graus e apresente-o convertido em radianos.
#include <stdio.h>
#include <math.h>
int main(){
    float rad, ang;
    printf("Insira um ângulo em graus: ");
    scanf("%f", &ang);
    rad = ang * M_PI/180;
    printf("O ângulo %.2f° (graus) equivale a %.4f radianos.", ang, rad);
    return 0;
}