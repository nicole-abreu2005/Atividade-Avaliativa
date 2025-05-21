#include <stdio.h>

int main() {
    int numeros[100];
    int x, i;
    int encontrado = 0;  

    
    for(i = 0; i < 100; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    
    printf("Digite o valor de x: ");
    scanf("%d", &x);

    for(i = 0; i < 100; i++) {
        if(numeros[i] == x) {
            encontrado = 1;
            break; 
        }
    }

    if(encontrado) {
        printf("O valor x existe no conjunto.\n");
    } else {
        printf("O valor x NAO existe no conjunto.\n");
    }

    return 0;
}
