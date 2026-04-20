#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main(void) {

    SetConsoleOutputCP(65001);

    float primeiro[4], media;

    printf("--- Calculadora Média ---\n");

    for (int i = 1; i <= 3; i++) {
        printf("Insira o %d° número:", i);
        scanf("%f", &primeiro[i]);
    }

    media = (primeiro[1] + primeiro[2] + primeiro[3]) / 3;

    printf("Sua média é: %f\n", media);
    printf("----------------------------\n");

    system("pause");
    return 0;
}
