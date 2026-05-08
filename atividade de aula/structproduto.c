#include <stdio.h>

    struct produto{
        int codigo;
        float preco;
        char nome[20];
    };

    int main(){
        struct produto p1;

        printf("insira o codigo do produto");
        scanf("%d",&p1.codigo);

        printf("insira o preço do produto");
        scanf("%.2f",&p1.preco);

        printf("insira o nome do produto");
        sacnf("%s", &p1.nome);
    }