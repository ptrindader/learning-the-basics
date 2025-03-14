#include <stdio.h>

int i = 1;
int tabuada;
int result;

int main() {
    printf("-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("TABUADA 2.0 (com WHILE)\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Você precisa da tabuada de qual número?\n");
    scanf("%d", &tabuada);

    while (i <=10) {
        int result = tabuada*i;
        printf("%dx%d = %d\n", tabuada, i, result);
        i++;
    }
}