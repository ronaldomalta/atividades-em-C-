//Imprimir uma palavra de trás-para-frente
#include <stdio.h>

int main() {
    char palavra[50];
    int tam = 0;
    printf("Digite uma palavra: ");
    scanf("%s", palavra); 

    while (palavra[tam] != '\0') {
        tam++;
    }

    printf("De tras-para-frente: ");
    for (int i = tam - 1; i >= 0; i--) {
        printf("%c", palavra[i]);
    }
    printf("\n");

    return 0;
}