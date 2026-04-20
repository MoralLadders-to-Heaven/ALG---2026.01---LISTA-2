#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    float tamanhoMB, velocidadeMbps, tempoSegundos, tempoMinutos;

    printf("--- Calculadora de Tempo de Download ---\n\n");

    printf("Informe o tamanho do arquivo (MB): ");
    scanf("%f", &tamanhoMB);

    printf("Informe a velocidade da internet (Mbps): ");
    scanf("%f", &velocidadeMbps);

    //Calculo
    tempoSegundos = (tamanhoMB * 8) / velocidadeMbps;

    //Converter
    tempoMinutos = tempoSegundos / 60;

    printf("\nO tempo aproximado de download é de: %.2f minutos\n", tempoMinutos);
    printf("========================================\n");

    system("pause");
    return 0;
}
