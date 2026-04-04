#include<stdio.h>

int main(){
    int v[8], X, Y;
for(int i = 0; i < 8; i++) {
        printf("Posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Escolha dois índices (0 a 7) para somar: ");
    scanf("%d %d", &x, &y);

    if(x >= 0 && x < 8 && y >= 0 && y < 8) {
        printf("A soma dos valores nas posições %d e %d é: %d\n", x, y, vetor[x] + vetor[y]);
    } else {
        printf("Índices inválidos!\n");
    }

    return 0;
}