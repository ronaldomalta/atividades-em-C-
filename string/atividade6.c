//Crie um programa que calcula o comprimento de uma string (não use a função strlen).
#include <stdio.h>

int main() {
    char texto[100];
    int comprimento = 0;

    printf("Digite um texto: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0';
    while (texto[comprimento] != '\0') {
        comprimento++;
    }

    printf("o comprimeto da string e: %d\n", comprimento);
    return 0;
}
