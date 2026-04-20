#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // Para configurar acentuação no console

int main() {

    SetConsoleOutputCP(65001);

    float peso, altura, imc;

    printf("--- Calculadora de IMC ---\n\n");

    printf("Digite o seu peso (kg): ");
    scanf("%f", &peso);

    printf("Digite a sua altura (m): ");
    scanf("%f", &altura);

    // Cálculo do IMC
    imc = peso / (altura * altura);

    printf("\nSeu IMC é: %.2f\n", imc);

    // Tabela de Classificação
    printf("Classificação: ");
    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    }
    else
        if (imc >= 18.5 && imc < 25) {
        printf("Peso normal\n");
    }
    else
        if (imc >= 25 && imc < 30) {
        printf("Sobrepeso\n");
    }
    else {
        printf("Obesidade\n");
    }

    printf("\n==========================\n");

    system("pause");
    return 0;
}
