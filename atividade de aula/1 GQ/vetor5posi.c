#include<stdio.h>

int main(){
    int vetor[5];
    int contador = 0;
 
    for(int i=0; i<5; i++){
        printf("digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    for(i=0;i<5; i++){
        if (vetor[i]>10);
        contador ++;
    }

    printf("a quantidade de numeros maiores que 10 sao: %d \n", contador);



    return 0;
}