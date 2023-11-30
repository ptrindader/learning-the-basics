#include <iostream>
#include <string>

using namespace std;

int main(){
    string hello = "Olá, Mundo!\n";
    string hello2 = "Olá, Mundo!";

    if (hello == hello2) {
        cout << "As strings são IGUAIS!\n";
    }

    else{
        cout << "Nop. Diferentes.\n";
    }

    if (hello.compare(hello2) == 0) {
        cout << "Sim, as strings são iguais. Já falei.";
    }

    else{
        cout << "Nop. Diferentes. Já disse.\n";
    }

    return 0;
}

//Tanto o "string.compare(string2)" quanto o operador "==" comparam strings.