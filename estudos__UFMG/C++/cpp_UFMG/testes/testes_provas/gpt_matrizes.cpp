#include <iostream>

const int MAX_ROWS = 3;
const int MAX_COLS = 3;

// Função para imprimir a matriz
void imprimirMatriz(int matriz[MAX_ROWS][MAX_COLS], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// Função para somar duas matrizes
void somarMatrizes(int matrizA[MAX_ROWS][MAX_COLS], int matrizB[MAX_ROWS][MAX_COLS], int resultado[MAX_ROWS][MAX_COLS], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            resultado[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

int main() {
    int matrizA[MAX_ROWS][MAX_COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrizB[MAX_ROWS][MAX_COLS] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int matrizResultado[MAX_ROWS][MAX_COLS];

    // Somar as matrizes A e B e armazenar o resultado em matrizResultado
    somarMatrizes(matrizA, matrizB, matrizResultado, MAX_ROWS, MAX_COLS);

    // Imprimir as matrizes
    std::cout << "Matriz A:" << std::endl;
    imprimirMatriz(matrizA, MAX_ROWS, MAX_COLS);

    std::cout << "Matriz B:" << std::endl;
    imprimirMatriz(matrizB, MAX_ROWS, MAX_COLS);

    std::cout << "Resultado da soma:" << std::endl;
    imprimirMatriz(matrizResultado, MAX_ROWS, MAX_COLS);

    return 0;
}
