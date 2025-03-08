//Escreva um programa de ajuda para vendedores,
//lendo um valor total de produto e mostrando:

//1) o total com desconto de 10%,
//2) o valor de cada parcela num parcelamento de 3x sem juros
//3) a comissão do vendedor, no caso da venda ser a vista (5% sobre o valor c/ desconto)
//4) a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total)
#include <stdio.h>
#include <math.h>
int main(){
    float total, totalAV, parcela3x, comissaoAV, comissaoP;
    printf("Insira o valor total do produto: ");
    scanf("%f", &total);
    totalAV = total*0.9;
    parcela3x = total/3;
    comissaoAV = totalAV*0.05;
    comissaoP = total*0.05;
    printf("VALOR TOTAL: R$%.2f \n\n"
        "VALOR À VISTA: R$%.2f\n"
        "VALOR DA PARCELA (3x sem juros): R$%.2f\n"
        "VALOR DA COMISSÃO VENDEDOR (à vista): R$%.2f\n"
        "VALOR DA COMISSÃO VENDEDOR (em 3x): R$%.2f", total, totalAV, parcela3x, comissaoAV, comissaoP
    );
    return 0;
}