#include <stdio.h>
#include <stdbool.h>

#define TAM 50

bool ehPrimo(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int V1[TAM];
    int V2[TAM]; 
    int contadorPrimos = 0;

    for (int i = 0; i < TAM; i++) {
        V1[i] = i + 1;
    }

    for (int i = 0; i < TAM; i++) {
        if (ehPrimo(V1[i])) {
            V2[contadorPrimos++] = V1[i];
        }
    }

    printf("Vetor V1 (1 a 50):\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", V1[i]);
    }

    printf("\n\nVetor V2 (números primos):\n");
    for (int i = 0; i < contadorPrimos; i++) {
        printf("%d ", V2[i]);
    }

    printf("\n");

    return 0;
}
