#include <stdio.h>

int main() {
    // imprime cabecalho do jogo
    printf("------------------------------------------\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("------------------------------------------\n\n");

    int numeroSecreto = 42;
    int chute;

    for(int i = 1; i <= 3; i++) {

        printf("Qual é o seu chute? \n");
        scanf("%d", &chute);
        printf("\nSeu chute foi %d.\n\n", chute);
        
        int acertou = (chute == numeroSecreto);


        // Igual-duplo é um igual para comparação
        
        if(acertou) { 
        printf("PARABÉNS! Você acertou!");  
        }
        
        else {

            if(chute > numeroSecreto) {
                printf("Você errou! Seu chute foi MAIOR que o número secreto...\nTente novamente!\n\n");
            }

            else  {
                printf("Você errou! Seu chute foi MENOR que o número secreto...\nTente novamente!\n\n");
            }
        
        }
    }    
}
