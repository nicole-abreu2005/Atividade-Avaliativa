#include <stdio.h>

#define ALUNOS 5
#define DADOS 4

int main() {
    int matriz[ALUNOS][DADOS];
    int i;

    int maiorNotaFinal = 0;
    int matriculaMaiorNota = 0;
    int somaNotasFinais = 0;

    for (i = 0; i < ALUNOS; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("  Matrícula: ");
        scanf("%d", &matriz[i][0]);

        printf("  Média das provas: ");
        scanf("%d", &matriz[i][1]);

        printf("  Média dos trabalhos: ");
        scanf("%d", &matriz[i][2]);

        matriz[i][3] = matriz[i][1] + matriz[i][2];

        if (matriz[i][3] > maiorNotaFinal) {
            maiorNotaFinal = matriz[i][3];
            matriculaMaiorNota = matriz[i][0];
        }

        somaNotasFinais += matriz[i][3];
    }

    printf("\nMatrícula do aluno com a maior nota final: %d\n", matriculaMaiorNota);
    printf("Média aritmética das notas finais: %.2f\n", somaNotasFinais / (float)ALUNOS);

    return 0;
}
