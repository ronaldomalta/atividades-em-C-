#include <stdio.h>

int main() {
    int vetor[10], maior, menor, posMaior = 0, posMenor = 0;

    for(int i = 0; i < 10; i++) {
        printf("Valor %d: ", i);
        scanf("%d", &vetor[i]);
        
        if(i == 0) { // Inicializa na primeira volta
            maior = menor = vetor[0];
        } else {
            if(vetor[i] > maior) {
                maior = vetor[i];
                posMaior = i;
            }
            if(vetor[i] < menor) {
                menor = vetor[i];
                posMenor = i;
            }
        }
    }

    printf("Maior: %d (Posição %d)\n", maior, posMaior);
    printf("Menor: %d (Posição %d)\n", menor, posMenor);

    return 0;
}