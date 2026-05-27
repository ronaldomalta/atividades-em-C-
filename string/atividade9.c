//Verificar se a string é um Palíndromo
#include <stdio.h>

int main() {
    char palavra[50];
    int tam = 0;
    int eh_palindromo = 1; 

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    while (palavra[tam] != '\0') {
        tam++;
    }

    int inicio = 0;
    int fim = tam - 1;

    
    while (inicio < fim) {
        if (palavra[inicio] != palavra[fim]) {
            eh_palindromo = 0; 
            break;
        }
        inicio++;
        fim--;
    }

    if (eh_palindromo) {
        printf("A palavra \"%s\" eh um palindromo.\n", palavra);
    } else {
        printf("A palavra \"%s\" nao eh um palindromo.\n", palavra);
    }

    return 0;
}