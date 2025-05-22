#include <stdio.h>

#define TAM 30
#define TAM_INTERCALADO 60

int main() {
    int conjunto1[TAM];
    int conjunto2[TAM];
    int intercalado[TAM_INTERCALADO];
    int i, j = 0;

    printf("Digite os %d números do primeiro conjunto:\n", TAM);
    for (i = 0; i < TAM; i++) {
        printf("conjunto1[%d]: ", i);
        scanf_s("%d", &conjunto1[i]);
    }

    printf("\nDigite os %d números do segundo conjunto:\n", TAM);
    for (i = 0; i < TAM; i++) {
        printf("conjunto2[%d]: ", i);
        scanf_s("%d", &conjunto2[i]); 
    }

    
    for (i = 0; i < TAM; i++) {
        intercalado[j++] = conjunto1[i];
        intercalado[j++] = conjunto2[i];
    }

    printf("\nVetor intercalado:\n");
    for (i = 0; i < TAM_INTERCALADO; i++) {
        printf("%d ", intercalado[i]);
    }
    return 0;
}
