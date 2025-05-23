#include <stdio.h>

#define TAM 4

int main() {
    int matriz[TAM][TAM];
    int contador = 0;

    
    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] > 10) {
                contador++;
            }
        }
    }

    
    printf("\nQuantidade de valores maiores que 10: %d\n", contador);

    return 0;
}
