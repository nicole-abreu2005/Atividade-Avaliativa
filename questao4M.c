#include <stdio.h>

#define ALUNOS 5
#define QUESTOES 10

int main() {
    char respostas[ALUNOS][QUESTOES];
    char gabarito[QUESTOES];
    int resultado[ALUNOS] = {0};

    printf("Digite o gabarito (10 letras a-d):\n");
    for (int i = 0; i < QUESTOES; i++) {
        printf("Questão %d: ", i + 1);
        scanf(" %c", &gabarito[i]);
    }

    for (int i = 0; i < ALUNOS; i++) {
        printf("\nDigite as respostas do aluno %d:\n", i + 1);
        for (int j = 0; j < QUESTOES; j++) {
            printf("Questão %d: ", j + 1);
            scanf(" %c", &respostas[i][j]);

            if (respostas[i][j] == gabarito[j]) {
                resultado[i]++;
            }
        }
    }

    printf("\nPontuação dos alunos:\n");
    for (int i = 0; i < ALUNOS; i++) {
        printf("Aluno %d: %d pontos\n", i + 1, resultado[i]);
    }

    return 0;
}
