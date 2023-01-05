#include <stdio.h>

int main() {
    // imprime cabecalho do nosso jogo
    printf("------------------------------------------\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("------------------------------------------\n\n");

    int numeroSecreto = 42;
    int chute;

    //printf("O número secreto é %d. Não conta pra ninguém!\n\n", numeroSecreto);
    printf("Qual é o seu chute? \n");
    scanf("%d", &chute);
    printf("Seu chute foi %d.", chute);

}