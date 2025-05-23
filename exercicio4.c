#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quickSort(int v[], int inicio, int fim) {
    if (inicio < fim) {
        int i = inicio;
        int j = fim;
        int pivo = v[(inicio + fim) / 2];  

        while (i <= j) {
            while (v[i] < pivo) i++;
            while (v[j] > pivo) j--;

            if (i <= j) {
                trocar(&v[i], &v[j]);
                i++;
                j--;
            }
        }

        quickSort(v, inicio, j);
        quickSort(v, i, fim);
    }
}

void imprimirVetor(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Digite o número de elementos: ");
    scanf("%d", &n);

    int vetor[n];

    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    quickSort(vetor, 0, n - 1);

    printf("\nVetor ordenado:\n");
    imprimirVetor(vetor, n);

    return 0;
}
