#include  <stdio.h>

void criar_variavel(){
    int x= 20;
    printf("o valor de x:%d\n", &x);
    printf("o endereco de X:%p\n", &x);
}
int main(){
    int x=10;
    printf("o valor de x:%d\n",&x);
    printf("o endereço de x:%p\n", &x);

    criar_variavel();
    printf("o valor de x:%d\n", &x);
    printf("o endereco de X:%p\n", &x);

    return 0;
}