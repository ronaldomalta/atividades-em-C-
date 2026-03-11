#include <stdio.h>
int main(){
int N, i, soma;
printf("digite um numero");
scanf("%d", N);
 while(i <= N){
    soma = soma + i;
    i++;
 }
 printf("soma=%d\n", soma);
 return 0;

}
