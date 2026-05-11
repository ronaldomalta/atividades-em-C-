#include <stdio.h>

float somar10(float numero_valor){
    if (numero_valor>=0){
        numero_valor = numero_valor + 10;
    }
    else{
        numero_valor=0;
    }
}

void somar10_por_referencia(float* p){
    if(*P>=0){
        |*p = *p+10;
    }
    else{
        *p=0

    }
}

int main(){
    float N;
    
    printf("digite o numero: \n");
    scanf("%f", &N);

    N = somar10(N);    

    somar10_por_referencia(&N);

         printf("a soma e: %.2f\n", N);
    return 0;
}