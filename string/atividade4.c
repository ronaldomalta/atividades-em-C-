//Leia duas frases (a e b). Construa c = "a b" usando strcpy e strcat, e imprima c.
#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    char b[100];
    char c[2005];

    printf("digite a primeria frase (a): ");
    fgets(a,sizeof(a),stdin);

    printf("digite a segunda frase (b): ");
    fgets(b,sizeof(b),stdin);

    a[strcspn(a, "\n") = '\0'];
    b[strcspn(b, "\n") = '\0'];

    strcpy(c,a);

    strcat(c, " ");

    strcat(c, b);

    printf("\n Resultado da string c: %s\n", c);

    return 0;
}
