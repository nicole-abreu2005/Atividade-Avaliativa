#include <stdio.h>

#define TAM 3

int main() {
    int tabuleiro[TAM][TAM];
    int jogadaFeita = 0;

    printf("Digite o estado do tabuleiro (valores -1, 0 ou 1):\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("Posição [%d][%d]: ", i, j);
            scanf("%d", &tabuleiro[i][j]);
        }
    }

    for (int i = 0; i < TAM && !jogadaFeita; i++) {
        for (int j = 0; j < TAM && !jogadaFeita; j++) {
            if (tabuleiro[i][j] == 0) {
                printf("\nSua próxima jogada deve ser na posição [%d][%d].\n", i, j);
                jogadaFeita = 1;
            }
        }
    }

    if (!jogadaFeita) {
        printf("\nNão há jogadas disponíveis. Tabuleiro cheio!\n");
    }

    return 0;
}
