#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main(void) {
    SetConsoleOutputCP(65001);

    long long numeroA, numeroB, resto, valorOriginalA, valorOriginalB;
    int MDC, MMC;

    printf("--- Calculadora MMC ---\n");
    printf("Escreva o primeiro valor:");
    scanf("%lld", &numeroA);
    valorOriginalA = numeroA;

    printf("Escreva o segundo valor:");
    scanf("%lld", &numeroB);
    valorOriginalB = numeroB;

    // CALCULO MDC
    while (numeroB != 0) {
        resto = numeroA % numeroB;
        numeroA = numeroB;
        numeroB = resto;
    }
    MDC = numeroA;

    //Calculo MMC
    MMC = llabs(valorOriginalA * valorOriginalB) / MDC;

    printf("O resultado do MMC é %lld!\n", MMC);
    printf("--------------------------------------\n");
    system("pause");
    return 0;
}
