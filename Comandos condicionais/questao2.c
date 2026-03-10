#include<stdio.h>

int main(){
float A, B, c;

printf("digite o valor dos tres lados do triangulo: \n");
scanf("%f","%f", "%F", &A, &B, &C);

if (A < B + C && B < C +A && C < A + B){
    if (A==B && B==C){
        printf("e um triangulo equilatero \n");

 }
 else if (A==B|| B==C || C==A){
    printf("e um triangulo isoceles \n");
 }
 else {
    Printf("triangulo escalenio");
}
return 0;
}
}