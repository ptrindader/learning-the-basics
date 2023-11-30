#include <stdio.h>
#include <string.h> // Não é mais necessário importar.

int main() {
    char palavra[20];
    sprintf(palavra, "MELANCIA");
    
    int acertou = 0;
    int enforcou = 0;

    char chutes[26];
    char tentativas = 0; // Quantos chutes já foram dados.

    do {

        for(int i = 0; i < strlen(palavra); i++){ // Percorre a palavra.

            int achou = 0;
            
            for(int j = 0; j < tentativas; j++){ // Percorre a palavra enquanto
                if(chutes[j] == palavra[i]){
                    achou = 1;
                    break;
                }
            }

            if(achou){
                printf("%c ", palavra[i]);
            }

            else {
                printf("_ ");
            }
            
        }
        printf("\n");
        
        char chute;
        scanf(" %c", &chute);

        chutes[tentativas] = chute;
        tentativas++;

    } while(!acertou && !enforcou);

}
