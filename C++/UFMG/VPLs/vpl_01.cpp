#include <iostream>
#include <string>

using namespace std;

int main(){

    string palavra;
    cin >> palavra;

    int ocorrencias[26];

    for (int i = 0, ie = 26; i < ie; i++){
        ocorrencias[i] = 0;
    }

    for (int ch: palavra){
        int asc_code = ch - 'a';
        ocorrencias[asc_code]++;
    }
    
    for ()

    return 0;
}