#include <stdio.h>
#include <string.h> // Não é mais necessário importar.

int main() {
    char palavra[10];
    sprintf(palavra, "MELANCIA\0");
    
    int acertou = 0;
    int enforcou = 0;

    do{
        char chute;
        scanf("%c", &chute);

        for(int i = 0; i < strlen(palavra); i++){
            if(palavra[i] == chute){
                printf("A posição %d tem essa letra!\n", i);
            }
        }

    } while(!acertou && !enforcou);

}

/* 

Na função "do-while" usada, o código primeiro
executa o que está dentro da função e depois verifica
se a condição "while" foi atendida. Isso exclui a possibilidade
do bloco escrito em "do" nunca ser executado, o que é possível
na função "while" simples.

O operador "!" é um operador de negação, que inverte o valor
de um booleano (0 vira 1 /// 1 vira 0).

O bloco "for" criou um loop que irá varrer a string em
busca da letra chutada pelo usuário.

*/

