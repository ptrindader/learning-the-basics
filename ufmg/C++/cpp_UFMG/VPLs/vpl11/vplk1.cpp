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