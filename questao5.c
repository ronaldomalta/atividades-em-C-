#include <stdio.h>
int main(){
float C, T, preco, custo;
printf("digite o valor do comprimeto:");
scanf("%f", &C);
float L;
printf("digite o valor da largura: ");
scanf("%f", &L);
T= C * L;
printf("digite preco por metro: ");
scanf("%f", &preco);
custo= T * preco;

printf("o valor que vc precisa para cobrir o terreno e: %0.2f\n", custo);
return 0;
}