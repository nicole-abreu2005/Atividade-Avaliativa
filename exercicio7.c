#include <stdio.h>
#include <stdbool.h>


void bubbleSort(int v[], int n) {
    int i, j, temp;
    bool trocou;
    int passos = 0;

    for (i = 0; i < n - 1; i++) {
        trocou = false;
        for (j = 0; j < n - i - 1; j++) {
            passos++; 
            if (v[j] > v[j + 1]) {
            
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
                trocou = true;
            }
        }
        if (!trocou) {
            break;
        }
    }

    printf("Número de passos (comparações): %d\n", passos);
}

void imprimirVetor(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {

    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(vetor) / sizeof(vetor[0]);

    printf("Vetor original:\n");
    imprimirVetor(vetor, n);

    bubbleSort(vetor, n);

    printf("Vetor ordenado:\n");
    imprimirVetor(vetor, n);

    return 0;
}
