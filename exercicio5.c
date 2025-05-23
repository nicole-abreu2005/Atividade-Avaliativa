#include <stdio.h>
#include <stdlib.h>

void intercalar(int v1[], int n1, int v2[], int n2, int v3[]) {
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (v1[i] < v2[j]) {
            v3[k++] = v1[i++];
        } else {
            v3[k++] = v2[j++];
        }
    }

    while (i < n1) {
        v3[k++] = v1[i++];
    }

    while (j < n2) {
        v3[k++] = v2[j++];
    }
}


void imprimirVetor(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {
    int n1, n2;

    printf("Informe o tamanho do primeiro vetor (v1): ");
    scanf("%d", &n1);
    int v1[n1];
    printf("Digite %d números em ordem crescente:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &v1[i]);
    }

    printf("Informe o tamanho do segundo vetor (v2): ");
    scanf("%d", &n2);
    int v2[n2];
    printf("Digite %d números em ordem crescente:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &v2[i]);
    }

    int v3[n1 + n2]; 

    intercalar(v1, n1, v2, n2, v3);

    printf("\nVetor intercalado (ordenado):\n");
    imprimirVetor(v3, n1 + n2);

    return 0;
}
