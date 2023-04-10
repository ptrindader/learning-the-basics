#include <iostream>
using namespace std;

int main() {
    int x = 5;
    cout << "Valor inicial de x: " << x << endl;

    // x++ primeiro retorna o valor atual de x e depois incrementa
    cout << "x++: " << x++ << endl;
    cout << "Valor de x após x++: " << x << endl;

    // ++x primeiro incrementa o valor de x e depois retorna o novo valor
    cout << "++x: " << ++x << endl;
    cout << "Valor de x após ++x: " << x << endl;

    return 0;
}
