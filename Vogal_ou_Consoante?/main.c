#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void) {

    SetConsoleOutputCP(65001);

    char letra;

    printf("--- Cosoante ou Vogal? ---\n");
    printf("Insira a letra que deseja saber se é cosoante ou vogal:");
    scanf("%c",&letra);

    if(letra == 'a'||letra == 'A'||letra == 'e'||letra == 'E'||letra == 'i'||letra == 'I'||letra == 'o'||letra == 'O'||letra == 'u'||letra == 'U') {
        printf("Sua letra é uma Vogal!\n");
    }
    else {
        printf("Sua letra é uma Consoante!\n");
    }

    printf("---------------------------------\n");

    system("pause");
    return 0;
}
