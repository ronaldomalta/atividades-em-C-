//Leia duas palavras armazenando em strings diferentes, copie para uma terceira string aquela que for menor e imprima.
#include <stdio.h>
#include <string.h>

int main(){
    char palavra1[50];
    char palavra2[50];
    char palavra3[50];
  
    printf("digite a primeria palavra: ");
    scanf("%s", palavra1);

    printf("digite a segunda palavra: ");
    scanf("%s", palavra2);

    if (strlen(palavra1) < strlen(palavra2)){
        strcpy(palavra3,palavra1);
    }else{
        strcpy(palavra3,palavra2)
    }

    printf("\n A menor palavra copiada para a terceira string é : %s", palavra3);

    return 0;

}