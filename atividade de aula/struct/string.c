#include <stdio.h>
#include <string.h>

struct cadastro{
    char nome[20];
    int idade;
};

int main(){
    struct cadastro C1;
    stricpy(C1.nome, 'paulo');
    C1.idade=20;
    .....
}