#include <stdio.h>

#define NUMERO_DE_TENTATIVAS 5

int main() {
    
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");

    int numero_secreto = 42;
    int chute;
    int tentativas = 1;

    while(1) {
        
        printf(">> TENTATIVA %d\n\n", tentativas);

        printf("Qual é o seu chute? \n");
        scanf("%d", &chute);
        printf("\nSeu chute foi %d.\n", chute);

        if (chute < 0) {
            printf ("Você não pode chutar números negativos!\n\n--------------------- \n");
            continue;
        }
        
        int acertou = (chute == numero_secreto);
        int maior = chute > numero_secreto;
        
        if(acertou) { 
            printf("\nPARABÉNS! Você acertou em %d tentativas!", tentativas);
            break;
        }
        
        else if(maior) {
            printf("Você errou! Seu chute foi MAIOR que o número secreto...\n\nTente novamente!\n\n--------------------- \n");;
        }

        else  {
            printf("Você errou! Seu chute foi MENOR que o número secreto...\n\nTente novamente!\n\n--------------------- \n");;
        };

        tentativas++;
    }
        
    printf("\n\nFim de jogo!\n\n");

}
