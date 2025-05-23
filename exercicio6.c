#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100000

void merge(int v[], int inicio, int meio, int fim) {
    int i = inicio, j = meio + 1, k = 0;
    int tamanho = fim - inicio + 1;
    int *temp = malloc(tamanho * sizeof(int));

    while (i <= meio && j <= fim) {
        if (v[i] < v[j]) {
            temp[k++] = v[i++];
        } else {
            temp[k++] = v[j++];
        }
    }

    while (i <= meio) {
        temp[k++] = v[i++];
    }

    while (j <= fim) {
        temp[k++] = v[j++];
    }

    for (i = inicio, k = 0; i <= fim; i++, k++) {
        v[i] = temp[k];
    }

    free(temp);
}

void mergeSort(int v[], int inicio, int fim) {
    if (inicio < fim) {
        int meio = (inicio + fim) / 2;
        mergeSort(v, inicio, meio);
        mergeSort(v, meio + 1, fim);
        merge(v, inicio, meio, fim);
    }
}

int main() {
    int vetor[TAM];
    clock_t inicio, fim;
    double tempo_execucao;

    srand(time(NULL));

    for (int i = 0; i < TAM; i++) {
        vetor[i] = rand() % 1000000;
    }

    inicio = clock();

    mergeSort(vetor, 0, TAM - 1);

    fim = clock();

    tempo_execucao = ((double)(fim - inicio)) / CLOCKS_PER_SEC;

    printf("Merge Sort concluído para %d elementos.\n", TAM);
    printf("Tempo de execução: %.3f segundos\n", tempo_execucao);

    return 0;
}
