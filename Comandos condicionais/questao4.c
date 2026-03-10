#include<stdio.h>
int main{
float salario, emprestimo;
    printf("digite o seu salario: \n");
    scanf("%.2f", salario);

    printf("digite o seu emprestimo\n");
    scanf("%.2f", emprestimo);

    if (emprestimo > salario * 0.20){
        printf("Empréstimo não concedido\n");
    }
    else{
        printf("Empréstimo concedido\n");
    }
    return 0:
}
