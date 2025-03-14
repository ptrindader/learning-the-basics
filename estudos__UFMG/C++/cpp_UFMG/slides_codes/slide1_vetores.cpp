#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Digite o número de elementos: ";
    cin >> n;

    int dados [n];
    for (int i = 0; i < n; i++) {
        cout << "Digite o " << i+1 << "-ésimo número: ";
        cin >> dados[i];
    }

    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += dados[i];
    }
    
    cout << "A soma foi: " << soma << endl;
}