#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vetor = {0, 6, 12, 18, 24};
    for (int i = 0; i < vetor.size(); i++) {
        cout << vetor[i] << endl;
    }

    cout << endl;

    for (int x : vetor)
        cout << x << endl;

    cout << endl;

 