#include <iostream>
#include <cmath>
using namespace std;

struct Aluno{
  int matricula;
  string nome;

  float calcularNSG(){
    //Fazer calculo de NSG
    return 0;
  };
};

int main() {
  Aluno aluno;
  aluno.nome = "Pedro Trindade Reis";
  aluno.matricula = 2022055548;

  aluno.calcularNSG();

  cout << aluno.nome << endl << aluno.matricula << endl;
  
  return 0;
}