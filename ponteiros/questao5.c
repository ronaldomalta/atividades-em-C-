#include<stdio.h>

int somadobro(int *a, int *b){
    *a = (*a)*2;
    *b = (*b)*2;
    return (*a + *b);
}


int main(){
    int v1, v2;

printf("digite dois numeros");
scanf("%d %d", &v1,&v2);

int resultado= somadobro(&v1, &v2);

printf("resultado= %d" resultado);
printf("novo valor de A = %d" v1);
printf("novo valor de B = %d" v2);


    return 0;
}