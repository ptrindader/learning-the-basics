#include <iostream>
using namespace std;

class Forma{
    public:
    virtual void desenhar(){
        cout << "Desenhando uma forma!" << endl;
    }
};

class Circulo: public Forma{
    public:
    void desenhar(){
        cout << "Desenhando um circulo!" << endl;
    }
};

class Retangulo: public Forma{
    public:
    void desenhar(){
        cout << "Desenhando um circulo!" << endl;
    }
};

int main(){
    Forma *f1 = new Retangulo
    Forma *f2 = new Circulo

    f1->desenhar();
    f2->desenhar();
}