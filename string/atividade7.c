//Contar espaços em branco em uma frase
#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    int espacos = 0;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';

    
    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == ' ') {
            espacos++;
        }
    }

    printf("A frase contem %d espacos em branco.\n", espacos);
    return 0;
}