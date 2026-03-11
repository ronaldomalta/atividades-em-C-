#include <stdio.h>

int main() {
    int num, i = 2, primo = 1;

    printf("Digite um numero maior que 1: ");
    scanf("%d", &num);

    while(i < num){
        if(num % i == 0){
            primo = 0;
        }
        i++;
    }

    if(primo == 1)
        printf("Numero primo\n");
    else
        printf("Nao e primo\n");

    return 0;
}