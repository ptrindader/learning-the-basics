#include <iostream>
#include <stdexcept>

using namespace std;

double divisao (int a, int b){
    if (b == 0){
        throw runtime_error("Erro: Divisão por zero.");
    }
    return (double) a/b;
}

int main(){
    try {
        double d = divisao(4,0);
        cout << d << endl;

    } catch (const runtime_error& e){
        cerr << e.what() << endl;
    }
}
