#include <stdio.h>

int main() {
    char palavra[10];
    sprintf(palavra, "MELANCIA\0");
    printf("%s", palavra);
}

/*

O código acima usa o %s juntamente 
com a função "sprintf", que lê uma
array como se fosse uma string e introduz no
final dela um "/0", indicando o fim
daquela cadeia de caracteres.

*/