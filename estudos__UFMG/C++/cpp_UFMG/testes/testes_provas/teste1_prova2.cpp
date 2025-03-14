#include <iostream>
using namespace std;

class ContaBancaria {
    private:
        double saldo;

    public:
        ContaBancaria (double saldoInicial){
            this->saldo = saldoInicial;
        }
    
        void depositar(double valor){
            this->saldo += valor;
        }

        void sacar(double valor){
            this->saldo -= valor;
        }

        double getSaldo(){
            return this->saldo;
        }
};

 int main(){
    ContaBancaria minhaConta(1000);

    minhaConta.depositar(500);
    cout << "Saldo após depósito: " << minhaConta.getSaldo() << endl;

    minhaConta.sacar(300);
    cout << "Saldo após o saque: " << minhaConta.getSaldo() << endl;

    return 0;

}