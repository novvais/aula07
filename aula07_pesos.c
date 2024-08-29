#include <stdio.h>

int main() {
    float peso1, peso2, peso3;
    float x;

    printf("Digite o primeiro peso:");
    scanf("%f", &peso1);

    printf("Digite o segundo peso:");
    scanf("%f", &peso2);

    printf("Digite o terceiro peso:");
    scanf("%f", &peso3);

    x = peso1;

    if (x < peso2) {
        x = peso2;
    }

    if (x < peso3) {
        x = peso3;
    }

    printf("O maior peso e: %f", x);
}

