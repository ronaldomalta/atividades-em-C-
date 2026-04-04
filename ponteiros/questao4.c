#include<stdio.h>

void odernar (int *maior, int *menor){
    if (*menor > *maior){
        int temp= *maior;
        *maior= *menor;
        *menor= temp;


    }
}

int main(){

    int M, m;
    printf("digite dois valores:");
    scanf("%d %d"M,m);

    odernar(&M,&m);

    printf("maior em A:%d | maior em B: %d" M, m );


    return 0;

}