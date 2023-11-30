#include <iostream>
#include <string>

using namespace std;

int main() {
    string hello("Olá, Mundo!\n");
    string hi = "Oi, Mundo!\n\n";
    cout << hello;
    cout << hi;
    string maisuma = "Pao de batata!";
    cout << maisuma<< endl;
    cout << "O tamanho da frase acima ocupa " << maisuma.size() << " espaços!\n";
    cout << "Se usasse o til (~) na letra A, ocuparia um espaço a mais!";
    return 0;
}