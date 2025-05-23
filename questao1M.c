#include <stdio.h>

#define TAM 9

int verificarLinha(int matriz[TAM][TAM], int linha) {
    int numeros[TAM+1] = {0}; 

    for (int j = 0; j < TAM; j++) {
        int num = matriz[linha][j];
        if (numeros[num] != 0)
            return 0; 
        numeros[num] = 1;
    }
    return 1;
}

int verificarColuna(int matriz[TAM][TAM], int coluna) {
    int numeros[TAM+1] = {0};

    for (int i = 0; i < TAM; i++) {
        int num = matriz[i][coluna];
        if (numeros[num] != 0)
            return 0;
        numeros[num] = 1;
    }
    return 1;
}

int verificarBloco(int matriz[TAM][TAM], int inicioLinha, int inicioColuna) {
    int numeros[TAM+1] = {0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int num = matriz[inicioLinha + i][inicioColuna + j];
            if (numeros[num] != 0)
                return 0;
            numeros[num] = 1;
        }
    }
    return 1;
}

int verificarSudoku(int matriz[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        if (!verificarLinha(matriz, i) || !verificarColuna(matriz, i))
            return 0;
    }

    for (int i = 0; i < TAM; i += 3) {
        for (int j = 0; j < TAM; j += 3) {
            if (!verificarBloco(matriz, i, j))
                return 0;
        }
    }

    return 1;
}

int main() {
    int sudoku[TAM][TAM] = {
        {5,3,4,6,7,8,9,1,2},
        {6,7,2,1,9,5,3,4,8},
        {1,9,8,3,4,2,5,6,7},
        {8,5,9,7,6,1,4,2,3},
        {4,2,6,8,5,3,7,9,1},
        {7,1,3,9,2,4,8,5,6},
        {9,6,1,5,3,7,2,8,4},
        {2,8,7,4,1,9,6,3,5},
        {3,4,5,2,8,6,1,7,9}
    };

    if (verificarSudoku(sudoku)) {
        printf("A matriz é uma solução válida para o Sudoku.\n");
    } else {
        printf("A matriz NÃO é uma solução válida para o Sudoku.\n");
    }

    return 0;
}
