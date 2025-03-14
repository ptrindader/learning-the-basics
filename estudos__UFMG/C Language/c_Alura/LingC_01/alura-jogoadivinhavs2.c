#include <stdio.h>

#define NUMERO_DE_TENTATIVAS 5

int main() {
    
    // Imprime cabecalho do jogo
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");

    int numero_secreto = 42;
    int chute;
    //int ganhou = 0;
    int tentativas = 1;
    
    // A variável numero_de_tentativas abaixo foi retirada para a implementação da constante de mesmo nome (em Caps) pela diretiva "define".
    // int numero_de_tentativas = 3; 

    // for(int i = 1; i <=  NUMERO_DE_TENTATIVAS; i++) {

        // o "for" executa o bloco de código até que a condição seja atendida.
        // Acima, agora com o 'for' retirado do código, foi declarada a variável "i", em seguida foi declarada a CONDIÇÃO e, por fim, o INCREMENTO.
        // O incremento é o que o "for" faz após executar o bloco e antes de executá-lo novamente, se for o caso.

    // Abaixo, vemos um LOOP INFINITO com o "while(1)". 
    // Eventualmente, o loop deve ser quebrado. No caso, essa quebra é no comando "break".

    while(1) {
        
        printf(">> TENTATIVA %d\n\n", tentativas);

        printf("Qual é o seu chute? \n");
        scanf("%d", &chute);
        printf("\nSeu chute foi %d.\n", chute);

        if (chute < 0) {
            printf ("Você não pode chutar números negativos!\n\n--------------------- \n");
            continue; //"Reinicia" o loop sem ler o resto do bloco.
        }
        
        int acertou = (chute == numero_secreto);
        int maior = chute > numero_secreto;
        // int menor = chute < numero_secreto; //(variável não foi necessária) 
        // OBS.: Igual-duplo é um igual para comparação
        
        if(acertou) { 
            printf("\nPARABÉNS! Você acertou em %d tentativas!", tentativas);
            // Aqui, pode tanto ser usado o "break" quanto o "i = 3" ou "ganhou = 1". Todos encerram o loop do "for".
            // i = 3;
            // ganhou = 1 (caso a condição do "if" seja "ganhou = 1" e a do "while" seja "ganhou == 0")
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
