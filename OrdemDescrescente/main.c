#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main() {

    SetConsoleOutputCP(65001);

    long long valores[3];

    printf("Digite tres valores separados por espaço: ");
    scanf("%lld %lld %lld", &valores[0], &valores[1], &valores[2]);

    for (int i = 0; i < 3; i++) {

        for (int j = i + 1; j < 3; j++) {

            if (valores[i] < valores[j]) {
                long long temp = valores[i];
                valores[i] = valores[j];
                valores[j] = temp;
            }
        }
    }

    printf("Valores em ordem decrescente: %lld, %lld, %lld\n",
            valores[0], valores[1], valores[2]);

    system("pause");
    return 0;
}
