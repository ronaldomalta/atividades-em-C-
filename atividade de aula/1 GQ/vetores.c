#include <stdio.h>



int main(){
    float notas[4];
    printf("vetor notas[0]:%.2f\n",notas[0]);
    printf("vetor notas[1]:%.2f\n",notas[1]);
    printf("vetor notas[2]:%.2f\n",notas[2]);
    printf("vetor notas[3]:%.2f\n",notas[3]);
     notas[0]=9
     notas[1]=8
     notas[2]=5
     notas[3]=10

     float soma=0
    for(int notas=0; notas<4; notas++){
        soma = soma + notas[i];
    }


    float media = soma/4;
    printf("media: %2f\n", media);

    return 0;

}