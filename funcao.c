#include <stdio.h>

char* dados(char* me, char* ma, int idade) {
    if (idade < 18) {
        return me;
    } else {
        return ma;
    }
}

int main() {
    int idade;
    char* me = "menor";
    char* ma = "maior";
    char* result;

    printf("Informe sua idade:\n");
    scanf("%d", &idade);

    result = dados(me, ma, idade);

    printf("Idade: %d\n", idade);
    printf("Resultado: %s\n", result);

    return 0;
}