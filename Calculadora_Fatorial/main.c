#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    int numero;
    unsigned long long fatorial = 1;

    printf("--- Calculadora de Fatorial ---\n\n");
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Erro: Não existe fatorial de número negativo!\n");
    } else {    
        printf("%d! = ", numero);

        for (int i = numero; i >= 1; i--) {
            fatorial *= i; //caluclo

            if (i > 1) {
                printf("%d . ", i);
            } else {
                printf("%d", i);
            }
        }

        printf(" = %llu\n", fatorial);
    }

    printf("\n===============================\n");
    system("pause");
    return 0;
}
