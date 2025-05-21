#include <stdio.h>
#include <math.h> 

int main() {
    int numeros[100];
    int i, soma = 0;
    float media, desvio_medio = 0;


    for(i = 0; i < 100; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    media = soma / 100.0;

    for(i = 0; i < 100; i++) {
        desvio_medio += fabs(numeros[i] - media);
    }

    desvio_medio = desvio_medio / 100.0;

    printf("O desvio médio é: %.2f\n", desvio_medio);

    return 0;
}
