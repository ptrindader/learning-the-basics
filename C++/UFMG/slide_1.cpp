#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

// A unidade de medida do valor do "setprecision() é em bit, considerando o ponto flutunte."

int main(){
    double pi = 3.1415;
    cout << "Olá Pedro! :) " << endl;
    cout << "O valor de PI é...? " << endl;
    cout << pi << endl << endl;
    cout << "E se eu quiser uma precisão menor? " << endl;
    cout << setprecision(1) << pi << endl << endl;
    cout << "PI ao quadrado com 7 de precisão: " << setprecision(7) << pow(pi, 2);
    return 0;
}