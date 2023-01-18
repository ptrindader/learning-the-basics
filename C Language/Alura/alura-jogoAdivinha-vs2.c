#include <stdio.h>

int main() {
    // Imprime cabecalho do jogo
    printf("------------------------------------------\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("------------------------------------------\n\n");

    int numeroSecreto = 42;
    int chute;

    // o "for" executa o bloco de código até que a condição seja atendida.

    // Abaixo, foi declarada a variável "i", em seguida foi declarada a condição e, por fim, o incremento.
    // O incremento é o que o "for" faz após executar o bloco e antes de executá-lo novamente, se for o caso.

    for(int i = 1; i <= 3; i++) {

        printf(">> TENTATIVA %d de 3\n", i);

        printf("Qual é o seu chute? \n");
        scanf("%d", &chute);
        printf("\nSeu chute foi %d.\n", chute);
        
        int acertou = (chute == numeroSecreto);


        // OBS.: Igual-duplo é um igual para comparação
        
        if(acertou) { 
        printf("\nPARABÉNS! Você acertou!");
        i = 3;  
        }
        
        else {

            if(chute > numeroSecreto) {
                printf("Você errou! Seu chute foi MAIOR que o número secreto...\n\nTente novamente!\n\n--------------------- \n\n");
            }

            else  {
                printf("Você errou! Seu chute foi MENOR que o número secreto...\n\nTente novamente!\n\n--------------------- \n\n");
            }
        
        }
    }

    printf("\n\nFim de jogo!\n\n");   
}
