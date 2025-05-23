#include <stdio.h>

#define TAM 5

int main() {
    int matriz[TAM][TAM];


    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (i == j)
                matriz[i][j] = 1; 
            else
                matriz[i][j] = 0;
        }
    }

    
    printf("Matriz resultante:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
