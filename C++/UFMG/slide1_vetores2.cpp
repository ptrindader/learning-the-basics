#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> dados = {};
    int v = 0;
    int i = 0;
    while (v >= 0) {
        cout << "Digite o " << i+1 << "-ésimo número (-1 para terminar): ";
        cin >> v;
        if (v < 0) break;
        dados.push_back(v);
    }

    for (int& x: dados)
        x *= 2;
    //O operador "*=" é um operador de atribuição combinado que realiza a 
    //multiplicação do operando à esquerda pelo operando à direita e atribui o 
    //resultado à variável à esquerda.

    for (int x: dados)
        cout << x << endl;
}