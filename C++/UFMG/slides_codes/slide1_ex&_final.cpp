#include <iostream>

using namespace std;

int& function(int& f) {
    f = f + 3;
    return f;
}

int main() {
    int x = 7;
    int y;
    y = function(x);
    cout << "Input: " << x << endl;
    cout << "Output: " << y << endl;
    x++;
    y--;
    cout << "X: " << x << endl;
    cout << "Y: " << y << endl;
    return 0;
}

//Mostra como os valores X e Y continuam independentes mesmo após a variável de Y 
//receber como atribuição o valor da variável X (após ter sido usado de argumento na função "function").
//Isso é feito somando 1 a X e subtraindo 1 a Y, resultando em saídas diferentes (11 e 9).