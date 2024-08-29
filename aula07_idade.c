#include <stdio.h>

int main() {
    int age;

    printf("Qual sua idade?");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Você pode votar!");
    }

    if (age < 16) {
        printf("Você não pode votar!");
    } else {
        printf("Você é menor de idade mais pode votar!");
    }

    return 0;
}