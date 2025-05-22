#include <stdio.h>

#define TAM 30
#define TAM_TOTAL (TAM * 2)

void intercalarOrdenado(int a[], int b[], int c[]) {
    int i = 0, j = 0, k = 0;

    while (i < TAM && j < TAM) {
        if (a[i] < b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    
    while (i < TAM) {
        c[k++] = a[i++];
    }

    
    while (j < TAM) {
        c[k++] = b[j++];
    }
}

int main() {
    int conjunto1[TAM], conjunto2[TAM], conjuntoFinal[TAM_TOTAL];

    printf("Digite 30 números ordenados para o primeiro conjunto:\n");
    for (int i = 0; i < TAM; i++) {
        printf("conjunto1[%d]: ", i);
        scanf("%d", &conjunto1[i]);
    }

    printf("\nDigite 30 números ordenados para o segundo conjunto:\n");
    for (int i = 0; i < TAM; i++) {
        printf("conjunto2[%d]: ", i);
        scanf("%d", &conjunto2[i]);
    }

    intercalarOrdenado(conjunto1, conjunto2, conjuntoFinal);

    printf("\nConjunto final intercalado e ordenado:\n");
    for (int i = 0; i < TAM_TOTAL; i++) {
        printf("%d ", conjuntoFinal[i]);
    }

    return 0;
}
