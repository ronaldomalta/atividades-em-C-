#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c;
    float delta, x1, x2;
    
    printf("digite o valor de a, b, c \n");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0){
        printf("nao existe equacao de 2 grau");
        return 0;

    }
    delta=(b*b) -(4*a*b);
    if (delta<0){
        printf("nao existe raiz");
    }

    else if (delta == 0){
        x1=-b/ (2*a);
        printf("raiz unica: %.2f", x1);
    }
    else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        printf("Duas raizes reais:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);

}
}