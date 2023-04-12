#include <iostream>

using namespace std;



int main(){

    string palavra;
    cin >> palavra;

    int ocorrencias[26];

    for (int i = 0, ie = 26; i < ie; i++){
        ocorrencias[i] = 0;
    }

    for (int ch: palavra){
        cout << ch << endl;
    }
    
    return 0;
}