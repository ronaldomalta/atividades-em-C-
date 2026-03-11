#include <stdio.h>

int main() {
    int num, maior, menor;

    printf("Digite um numero: ");
    scanf("%d", &num);

    maior = num;
    menor = num;

    while(num >= 0){

        if(num > maior)
            maior = num;

        if(num < menor)
            menor = num;

        printf("Digite um numero: ");
        scanf("%d", &num);
    }

    printf("Maior = %d\n", maior);
    printf("Menor = %d\n", menor);

    return 0;
}