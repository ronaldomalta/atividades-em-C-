#include<stdio.h>

int main(){
float altura, peso, imc;
printf("qual e sua altura: \n");
scanf("%f", &altura);
printf("qual e seu peso");
scanf("%f", &peso);
imc=peso/ (altura*altura);
if (imc< 18.5){
    printf("abaixo do peso");
}
else if(imc>= 25){
    printf("acima do peso");
}
else{
    printf("peso normal");
}
return 0;
}