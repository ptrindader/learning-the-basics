// S3 CLASS 9: Variables
#include <stdio.h>

int main(){
//Declarando variáveis
	int idade; //INTEIRO

//Declarando E inicializando variáveis (com o valor 0)
	//int idade = 0;

//Função para escrever algo na saída padrão (console)
	printf("Insira a sua idade: ");

// Função para LER algo na entrada padrão (teclado)
	scanf("%d", &idade);

// Retornar idade lida ao usuário
    printf("Sua idade: %d anos de idade.", idade);

	return 0;
}
