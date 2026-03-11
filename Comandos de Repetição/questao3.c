#include<stdio.h>

int main() {
    int num, i = 1, soma = 0;

    printf("Digite um numero: ");
    
    scanf("%d", &num);
    
    while(i < num){
        if(num % i == 0){
            soma = soma + i;
        }
        i++;
    }
    printf("Soma dos divisores = %d\n", soma);
    return 0;
}