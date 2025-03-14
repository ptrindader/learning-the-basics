#include <iostream>
#include <vector>
using namespace std;

class ContaBancaria{
    private:
        double saldo;

    public:
        ContaBancaria (double saldoInicial){
            this->saldo = saldoInicial;
        }

        void depositar(double valor){
            this-> += valor;
        }

        void sacar (double valor){
            this->saldo -= valor;
        }

        double getSaldo(){
            return this->saldo;
        }
}

int main(){
    vector<ContaBancaria> contas;
    int opcao;
    double valor;

    do{
        cout << "Menu:\n";
        cout << "1. Criar conta\n";
        cout << "2. Depositar\n";
        cout << "3. Sacar\n";
        cout << "4. Ver saldo\n";
        cout << "5. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch(opcao){
            case 1:
                cout << "Saldo inicial: ";
                cin << valor;
                contas.push_back(ContaBancaria(valor))
        }
    }

}
