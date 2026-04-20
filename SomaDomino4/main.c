#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(65001);

    int somaApenasQuatros = 0;
    int totalPecasComQuatro = 0;
    int alvo = 4;

    printf("Contando apenas os números %d do Dominó...\n\n", alvo);

    // Lado esquerdo
    for (int i = 0; i <= 6; i++) {

        // Lado direito
        for (int j = i; j <= 6; j++) {

            if (i == alvo || j == alvo) {

                int pontosNestaPeca = 0;

                if (i == alvo) pontosNestaPeca += alvo;

                if (j == alvo) pontosNestaPeca += alvo;

                printf("Peça (%d-%d) | Pontos de '4' encontrados: %d\n", i, j, pontosNestaPeca);

                somaApenasQuatros += pontosNestaPeca;
                totalPecasComQuatro += 1;
            }
        }
    }

    printf("\n====================================\n");
    printf("Total de peças que tinham o número %d: %d\n", alvo, totalPecasComQuatro);
    printf("A soma de todos os números %d encontrados é: %d\n", alvo, somaApenasQuatros);
    printf("====================================\n");

    system("pause");
    return 0;
}
