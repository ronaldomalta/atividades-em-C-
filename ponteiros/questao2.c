#include<stdio.h>

int main(){
    int v1, v2;

    printf("Endereço de v1: %p\n", (void*)&v1);
    printf("Endereço de v2: %p\n", (void*)&v2);

    if (&v1 > &v2) {
        printf("O maior endereço é o de v1: %p\n", (void*)&v1);
    } else {
        printf("O maior endereço é o de v2: %p\n", (void*)&v2);
    }
    return 0;
}