#include <stdio.h>
int main{
float valor, desconto;
printf("qual é o valor do produto: \n", valor);
scanf("%f", &valor);
desconto= valor * 0,12;
float valor_total;
valor_total= valor - desconto;
printf("o valor com desconto foi: %.2f \n", valor_total);

return 0;
}