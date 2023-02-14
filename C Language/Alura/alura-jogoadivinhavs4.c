#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMERO_DE_TENTATIVAS 5

int main() {
    
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");

    
    int segundos = time(0);
    srand (segundos); 
    
    int numerogrande = rand();

    int numerosecreto = numerogrande % 100; 
    int chute;
    int tentativas = 1;
    double pontos = 1000;

    int acertou = 0;

    int nivel;
    printf("Qual o nível de dificuldade?\n");
    printf("(1) Fácil\n(2) Médio\n(3) Difícil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    int numerodetentativas;

    switch (nivel){
        case 1:
            numerodetentativas = 20;
            break;
        
        case 2:
            numerodetentativas = 15;    
            break;
        
        default:
            numerodetentativas = 6;
            break;
    }

    for(int i = 1; i <= numerodetentativas; i++){
        
        printf(">> TENTATIVA %d\n\n", tentativas);
        printf("Qual é o seu chute? \n");

        scanf("%d", &chute);
        printf("\nSeu chute foi %d.\n", chute);

        if (chute < 0) {

            printf ("Você não pode chutar números negativos!\n\n--------------------- \n");
            continue;
        }
        
        acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if(acertou) {
            printf("****************************\n");
            break;
        }
        
        else if(maior) {

            printf("Você errou! Seu chute foi MAIOR que o número secreto...\n\nTente novamente!\n\n--------------------- \n");;
        }

        else  {

            printf("Você errou! Seu chute foi MENOR que o número secreto...\n\nTente novamente!\n\n-=-=-=-=-=-=-=-=-=-=-=- \n");;
        };

        tentativas++;
        pontos = pontos - abs(chute - numerosecreto)/(double)2;
    }
    
    printf("\nFim de jogo!\n\n");

    if(acertou) {

        printf("\n***PARABÉNS!***\nVocê acertou em %d tentativas!", tentativas);
        printf("\n> Pontuação final: %.2f pontos.\n\n", pontos);
    }

    else{

        printf("Você perdeu...jogue de novo!\n\n.");
    }; 
    
}
