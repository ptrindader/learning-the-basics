#include <iostream>
using namespace std;

const int MAX_LIN = 3;
const int MAX_COL = 3;

//funcao imprimir matriz

void imprimirMatriz(int matriz[MAX_LIN][MAX_COL], int linhas, int colunas){
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

//funcao somar matriz

void somarMatrizes(int matrizA[MAX_LIN][MAX_COL], int matrizB[MAX_LIN][MAX_COL], int resultado[MAX_LIN][MAX_COL], int linhas, int colunas){
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            resultado[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

int main(){
    int matrizA[MAX_LIN][MAX_COL] = {{1,2,3},{4,5,6},{7,8,9}};
    int matrizB[MAX_LIN][MAX_COL] = {{9,8,7},{6,5,4},{3,2,1}};
    int matrizResultado[MAX_LIN][MAX_COL];

    //somar as matrizes

    somarMatrizes(matrizA, matrizB, matrizResultado, MAX_LIN, MAX_COL);

    //imprimir matrizes

    imprimirMatriz(matrizA, MAX_LIN, MAX_COL);
    imprimirMatriz(matrizB, MAX_LIN, MAX_COL);
    imprimirMatriz(matrizResultado, MAX_LIN, MAX_COL);

    return 0;

}