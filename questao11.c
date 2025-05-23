#include <stdio.h>

#define NUM_OPERARIOS 15
#define SALARIO_MINIMO 1518.00

int main() {
    int vetNumOp[NUM_OPERARIOS];
    int vetNumPecas[NUM_OPERARIOS];
    int vetSexo[NUM_OPERARIOS];
    float vetSalarios[NUM_OPERARIOS];
    float totalFolha = 0.0;

    for (int i = 0; i < NUM_OPERARIOS; i++) {
        printf("Operário %d:\n", i + 1);
        
        printf("Número do operário: ");
        scanf("%d", &vetNumOp[i]);
        
        printf("Número de peças fabricadas: ");
        scanf("%d", &vetNumPecas[i]);
        
        printf("Sexo (1 - masculino, 2 - feminino): ");
        scanf("%d", &vetSexo[i]);

        int pecas = vetNumPecas[i];
        float salario;

        if (pecas <= 30) {
            salario = SALARIO_MINIMO;
        } else if (pecas <= 35) {
            salario = SALARIO_MINIMO + ((pecas - 30) * (0.03 * SALARIO_MINIMO));
        } else {
            salario = SALARIO_MINIMO + ((pecas - 30) * (0.05 * SALARIO_MINIMO));
        }

        vetSalarios[i] = salario;
        totalFolha += salario;

        printf("\n");
    }

    printf("\n--- RELATÓRIO ---\n");
    for (int i = 0; i < NUM_OPERARIOS; i++) {
        printf("Operário %d | Peças: %d | Salário: R$ %.2f\n",
               vetNumOp[i], vetNumPecas[i], vetSalarios[i]);
    }

    printf("\nTotal da folha de pagamento: R$ %.2f\n", totalFolha);

    return 0;
}
