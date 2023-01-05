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
    printf("\nSeu chute foi %d.\n\n", chute);

    // Igual-duplo é um igual para comparação
    if(chute == numeroSecreto){
       printf("PARABÉNS! Você acertou!");  
    }
    
    else {
        printf("Poxa...você errou...tente novamente!\n");
    }
}
