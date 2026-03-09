#include,stdio.h>

int main{
    float valor;
    valor= 780000;

    float x1,x2,x3;
    
    x1= valor * 0.46;
    x2= valor * 0.32;
    x3= valor - (x1 +x2);

    printf("o ganhador 1 recebera %.2f", x1);
    printf("o ganhador 2 recebera %.2f", x2);
    printf("o ganhador 3 recebera %.2f", x3);

    return 0;
}