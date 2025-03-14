#include <iostream>
using namespace std;

/*/

Declaracao do TAD:

nova struct chamada MyTAD
int 'x' e 2 metodos:
1. acessar atributo x e atribuindo um novo valor
2. imprimir operador this
/*/

struct MyTAD{

    int x = 0;

    void set_x(int x){
        this -> x = x; //Usa o operador "this" para acessar dados da ESTRUTURA.
    };

    void who_am_i(){
        cout << this << cout;
    }
};

int main(){

    MyTAD tad_stack;

    cout << &tad_stack << endl;
    tad_stack.set_x(55);
    tad_stack.who_am_i();
    tad_stack.x = 99;

    MyTAD *tad_heap = new MyTAD();
    tad_heap -> who_am_i();

    delete tad_heap;

    MyTAD outra_var_stack;
    outra_var_stack = tad_stack;

    MyTAD* outra_var_heap;
    outra_var_heap = &tad_stack;

    return 0;
}
