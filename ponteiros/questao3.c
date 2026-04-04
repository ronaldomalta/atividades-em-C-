#include<stdio.h>

void trocar(int *a, int *b){
    int temp = *a;
    *a= *b;
    *b= temp;
}

int main(){

    int v1, v2;
    printf("digite dois valores:");
    scanf("%d %d" &v1, &v2);

    trocar(&v1,&v2);

    printf("valores trocados: A=%d B=%d" v1, v2);

    return 0;
}