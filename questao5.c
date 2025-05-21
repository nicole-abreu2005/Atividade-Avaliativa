#include <stdio.h>

int main() {
    int numeros[100];
    int i;
    int soma = 0;
    float media;

    
    for(i = 0; i < 100; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i]; 
    }

    
    media = soma / 100.0;  

    printf("A média aritmética dos números é: %.2f\n", media);

    return 0;
}
