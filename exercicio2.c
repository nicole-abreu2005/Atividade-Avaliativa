#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20

void imprimirVetor(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {
    int vetor[TAM];

    srand(time(NULL));

    for (int i = 0; i < TAM; i++) {
        vetor[i] = rand() % 100;
    }

    printf("Vetor antes da ordenação:\n");
    imprimirVetor(vetor, TAM);

    for (int i = 1; i < TAM; i++) {
        int chave = vetor[i];
        int j = i - 1;

        while (j >= 0 && vetor[j] > chave) {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = chave;
    }

    printf("\nVetor após ordenação (Insertion Sort):\n");
    imprimirVetor(vetor, TAM);

    return 0;
}
