#include <stdio.h>

int main() {
    float notas[10];
    float soma = 0.0;
    int i, alunos_acima_media = 0;
    float media;

    for(i = 0; i < 10; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
        
    }

    media = soma / 10;

    for(i = 0; i < 10; i++) {
        if(notas[i] > media) {
            alunos_acima_media++;
        }
    }

    printf("Número de alunos com nota superior à média: %d\n", alunos_acima_media);

    return 0;
}
