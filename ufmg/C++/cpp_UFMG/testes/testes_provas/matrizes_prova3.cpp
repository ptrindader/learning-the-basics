#include <iostream>
using namespace std;

const int MAX_LIN = 3;
const int MAX_COL = 3;

//Funcao para imprimir matriz

void imprimirMatriz(int matriz[MAX_LIN][MAX_COL], int linhas, int colunas){
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

//Funcao somar duas matrizes

void somarMatrizes(int matrizA[MAX_LIN][MAX_COL], int matrizB[MAX_LIN][MAX_COL], int resultado[MAX_LIN][MAX_COL], int linhas, int colunas){
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            resultado[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

int main(){
    int matrizA[MAX_LIN][MAX_COL] = {{1,2,3},{4,5,6},{7,8,9}};
    int matrizB[MAX_LIN][MAX_COL] = {{9,8,7},{6,5,4},{3,2,1}};
    int matrizResultado[MAX_LIN][MAX_COL];

    //Somar matrizes e armazenar resultado em 'matrizResultado'

    somarMatrizes(matrizA, matrizB, matrizResultado, MAX_LIN, MAX_COL);

    //Imprimir as matrizes

    cout << "Matriz A: " << endl;
    imprimirMatriz(matrizA, MAX_LIN, MAX_COL);

    cout << "Matriz B: " << endl;
    imprimirMatriz(matrizB, MAX_LIN, MAX_COL);

    cout << "Soma das matrizes: " << endl;
    imprimirMatriz(matrizResultado, MAX_LIN, MAX_COL);

    return 0;
}