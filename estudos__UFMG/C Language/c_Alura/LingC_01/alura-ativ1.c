#include <stdio.h>

int main(){
	int x, y;

	printf("Digite um valor x: \n");
	scanf("%d", &x);

	printf("Digite um valor y: \n");
	scanf("%d", &y);
    
	printf("A multiplicação desses valores é igual a %d.", x*y);
	
	return 0;
}