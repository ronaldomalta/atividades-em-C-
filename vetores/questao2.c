#include<stdio.h>

int main(){

    float Vo[10], Vq[10];

    for(int i=0; i<10; i++){
        printf("digite o %dnumero" i + 1);
        scanf("%f", &Vo[i]);
        Vq[i]= Vo[i] * Vo[i];
    }
    printf("\noriginal | quadraado \n" Vo, Vq);
    for(int i=0; i<10;i++){
        printf("%.2f\t %.2f\n" Vo, Vq);
    }
    return 0;
}   