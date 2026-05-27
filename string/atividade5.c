//Leia duas frases (a e b). Use strcmp para dizer qual vem primeiro em ordem alfabética ou se são iguais.
#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    char b[100];

    printf("digite a primeria frase (a): ");
    fgets(a, sizeof(a), stdin);

    printf("digite a segunda frase (b): ");
    fgets(b, sizeof(b),stdin);

    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';

    int resultado = strcmp(a, b);

    if (resultado == 0){
        printf("\n As frases sao iguais,. \n");
    }
    else if (resultado < 0){
        printf("\n A frase \"5s\" vem primero em ordem alfabetica. \n", a);
    }
    else{
        printf("\nA frase \"%s\" vem primero em ordem alfabetica.", b);
    }
    return 0;
}