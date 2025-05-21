#include <stdio.h>

int main() {
    int numeros[100];
    int i;
    int maior, menor, amplitude;

    for(i = 0; i < 100; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    maior = menor = numeros[0];
    
    for(i = 1; i < 100; i++) {
        if(numeros[i] > maior) {
            maior = numeros[i];
        }
        if(numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    amplitude = maior - menor;

    
    printf("A amplitude total do conjunto é: %d\n", amplitude);

    return 0;
}
