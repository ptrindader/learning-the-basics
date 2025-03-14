#include <iostream>
#include <string>

using namespace std;

class NewString {
    private:
        string _valor;
    
    public:
        NewString(string str): _valor(str)[]
        void set_valor(string str);
        string get_valor();
    // Adicione abaixo a assinatura do operador ++ e explique o que isso significa
    // agora, adicione abaixo a assinatura do operador + e explique o que isso significa

};

void NewString::set_valor(string str){
    this ->_valor = str;
}

string NewString::get_valor(string str){
    return this->_valor;
}

//agora, complete o codigo de acordo com o comando.

int main(){
    NewString texto("abc");
    texto++;
    NewString texto2("def");
    texto = texto + texto2;
    cout << texto;
    cout << endl;
    return 0
}