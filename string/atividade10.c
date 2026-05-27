//Verificar se a segunda string está contida no FINAL da primeira
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];

    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    int tam1 = strlen(str1);
    int tam2 = strlen(str2);
    int contido = 1; 

    if (tam2 > tam1) {
        contido = 0; 
    } else {
       
        int deslocamento = tam1 - tam2;
      
        for (int i = 0; i < tam2; i++) {
            if (str1[deslocamento + i] != str2[i]) {
                contido = 0; 
                break;
            }
        }
    }

    if (contido) {
        printf("\nResultado: A segunda string ESTA contida no final da primeira.\n");
    } else {
        printf("\nResultado: A segunda string NAO esta contida no final da primeira.\n");
    }

    return 0;
}