//Leia um nome completo. Imprima o nome digitado e o endereço de memória do primeiro caractere da string.
#include <stdio.h>

int main(){
    char nome[100];

    printf("digite o nome completo:");

    fgets(nome,sizeof(nome), stdin);

    printf("\n Nome digitado: %s", nome);

    printf("endereço do primeiro caractere: %p\n", (void*)&nome[0]);
    printf("endereço do primeiro caractere: %p\n", (void*)nome);
}