#include <stdio.h>

int i = 1;
int tabuada;
int result;

int main() {
    printf("-=-=-=-=-=-=-=-=-=-=-\n");
    printf("TABUADA 1.0 (com FOR)\n");
    printf("-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Você precisa da tabuada de qual número?\n");
    scanf("%d", &tabuada);

    for (int i = 1; i <=10; i++) {
        int result = tabuada*i;
        printf("%dx%d = %d\n", tabuada, i, result);
    }
}