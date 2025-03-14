#include <fstream>
#include <iostream>

using namespace std;

int main() {
    ifstream in("entrada.txt", fstream::in);
    if (!in.is_open()) {
        return 1;
    }
    ofstream out("saida.txt", fstream::out);
    if (!out.is_open()) {
        return 1;
    }
    string line;
    while (getline(in, line)) {
        out << line << "\n";
    }
    in.close();
    out.close();
}

//Explicação (Muito completa) do CHAT GPT:

//Este é um código em C++ que realiza a leitura de um arquivo chamado "entrada.txt", 
//e escreve o conteúdo desse arquivo em um arquivo chamado "saida.txt". Abaixo, uma explicação mais detalhada do código:

//Inclui as bibliotecas "fstream" e "iostream". A biblioteca "fstream" 
//é utilizada para manipular arquivos, e "iostream" para entrada e saída de dados no console.

// a diretiva "using namespace std" para evitar ter que escrever "std::" 
//antes de todas as chamadas de funções do namespace padrão do C++.

// uma função "main", que é a função principal do programa.

//Cria um objeto "in" do tipo "ifstream", que representa o arquivo de entrada 
//"entrada.txt". A flag "fstream::in" indica que o arquivo será aberto para leitura.

//Verifica se o arquivo de entrada foi aberto com sucesso, utilizando o método "is_open()" do 
//objeto "in". Se o arquivo não foi aberto com sucesso, retorna um valor 1 indicando que houve um erro.

//Cria um objeto "out" do tipo "ofstream", que representa o arquivo de saída "saida.txt". 
//A flag "fstream::out" indica que o arquivo será aberto para escrita.

//Verifica se o arquivo de saída foi aberto com sucesso, utilizando o método "is_open()" 
//do objeto "out". Se o arquivo não foi aberto com sucesso, retorna um valor 1 indicando que houve um erro.

//Declara uma variável "line" do tipo "string", que será utilizada 
//para armazenar as linhas do arquivo de entrada.

//Entra em um loop "while", que lê cada linha do arquivo de entrada 
//utilizando o método "getline(in, line)", que retorna true enquanto ainda houver linhas para serem lidas.

//Escreve cada linha lida do arquivo de entrada no arquivo de 
//saída utilizando o operador "<<" do objeto "out".

//Fecha os arquivos de entrada e saída utilizando os 
//métodos "close()" dos objetos "in" e "out".

//Esse código é útil para realizar a leitura e escrita de 
//arquivos em C++, por exemplo, para processamento de dados ou criação de logs.