#include <stdio.h>
#include <math.h> 

int main() {
    int numeros[100];
    int i;
    double soma_quadrados = 0;
    double rmq;


    for(i = 0; i < 100; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
        soma_quadrados += pow(numeros[i], 2); 
    }

    rmq = sqrt(soma_quadrados / 100.0);

    printf("A raiz média quadrática é: %.2f\n", rmq);

    return 0;
}
