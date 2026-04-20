#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(65001);

    int numeroSorteado, palpite, tentativas = 0;

    srand(time(NULL));

    numeroSorteado = rand() % 101;

    printf("Bem-vindo ao Jogo de Adivinhação!\n");
    printf("Eu sorteei um número entre 0 e 100. Tente acertar!\n\n");

    while (palpite != numeroSorteado) {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);

        tentativas++;

        if (palpite < numeroSorteado) {
            printf("O número sorteado é MAIOR que %d.\n", palpite);
        }
        else if (palpite > numeroSorteado) {
            printf("O número sorteado é MENOR que %d.\n", palpite);
        }
        else {
            printf("\nPARABÉNS! Você acertou o número %d!\n", numeroSorteado);
            printf("Total de tentativas: %d\n", tentativas);
        }

        printf("------------------------------------\n");

    }

    system("pause");
    return 0;
}
