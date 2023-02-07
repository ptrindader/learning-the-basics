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
    //Muda a "seed" da função (operação matemática) da função rand, tornando esta baseada na variável "segundos". Isso define os números que a função rand retorna como PSEUDOALEATÓRIOS, por terem uma função matemática pré-definida para sua geração.

    int numerogrande = rand();

    int numero_secreto = numerogrande % 100; 
    //Por pegar o resto de uma divisão por 100, sempre dará um número entre 0 e 99, independente do número gerado.

    int chute;
    int tentativas = 1;
    float pontos = 1000;

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
        //pontos = pontos - (abs(chute - numero_secreto)/2.0);
        pontos = pontos - abs(chute - numero_secreto)/(double)2;
    }
    
    printf("\nPontuação final: %.2f pontos.", pontos);
    printf("\n\nFim de jogo!\n\n");

}
