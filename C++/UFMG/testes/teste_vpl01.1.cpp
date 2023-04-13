// Contar o número de ocorrências de uma letra específica: 
// Crie um programa que leia uma palavra do usuário e uma letra. 
// Em seguida, conte o número de vezes que a letra aparece na palavra e imprima o resultado na tela. 
// Isso o ajudará a entender como percorrer uma string e comparar seus caracteres.

#include <iostream>
#include <string>

using namespace std;

int main(){

    string palavra;
    char letra;
    int contador = 0;

    cout << "Digite uma palavra: ";
    cin >> palavra;
    cout << "Digite uma letra: ";
    cin >> letra;

    for (int i = 0; i < palavra.size(); i++){

        if(palavra[i] == letra){
            contador++;
        }
    }

    cout << "A letra " << letra << " aparece " << contador << " vezes na palavra \"" << palavra << "\"." << endl;

    return 0;
}