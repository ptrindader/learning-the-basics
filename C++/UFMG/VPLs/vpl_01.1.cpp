#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    string palavra;
    map<char, int> contagem;

    cout << "Insira uma palavra: ";
    cin >> palavra;

    for (char letra : palavra) {
        contagem[letra]++;
    }

    cout << "Quantidade de ocorrencias de cada letra:\n";
    for (char letra = 'a'; letra <= 'z'; letra++) {
        if (contagem[letra] > 0) {
            cout << letra << ": " << contagem[letra] << endl;
        }
    }

    return 0;
}

// O objetivo desse VPL é praticar os comandos de entrada e saída específicos de C++ 
// (cin, cout) e também a utilização do tipo string. Não utilize outros comando de entrada como o getline.

// Escreva um programa que lê como entrada apenas uma palavra. Em seguida, seu 
// programa deve contar o número de ocorrências de cada letra presente na palavra. 
// Por fim, deve-se imprimir a quantidade de vezes que uma determinada letra apareceu. 
// Se uma letra não aparece na palavra, ela não deve ser impressa. Imprima as letras em ordem alfabética.

// Para facilitar, você pode assumir que as palavras sempre terão todas as letras minúsculas. 
// Considere que os caracteres válidos são os presentes no intervalo “a” a “z”. 

// Exemplos de entrada e saída:

// input =
// estudantes

// output =
// a 1
// d 1
// e 2
// n 1
// s 2
// t 2
// u 1

// -------------------

// input =
// abacaxi

// output =
// a 3
// b 1
// c 1
// i 1
// x 1

// -------------------

// Dicas:

// Dica 1:
// Teste o arquivo localmente. Para isso, sugerimos utilizar o seguinte comando: ./executavel < entrada.txt
// O arquivo entrada.txt possui a palavra a ser utilizada como entrada.

// Dica 2:
// Utilize operações entre caracteres para facilitar. Exemplo:
// char caractere = 'c'
// int indice = caractere - 'a'
// O valor da variável índice será 2.