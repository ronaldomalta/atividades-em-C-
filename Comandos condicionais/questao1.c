#include<stdio.h>

int main{
float nota1, nota2, media;
    printf("qual foi a sua nota do 1GQ: \n", nota1);
    scanf("%0.2f", &nota1);
    while(nota1 < 0.0 || nota1 > 10.0){
        printf("nota invalida,Programa encerrado \n");
        return 0;
    }
    printf("qual foi a sua nota do 2GQ: \n", nota2);
    scanf("%0.2f", &nota2);
    while(nota2 < 0.0 || nota2 > 10.0){
        printf("nota invalida,Programa encerrado \n");
        return 0;
    }
    media= nota1 + nota2/ 2

    printf("sua media foi: %0.2f\n", media);
    return 0;




}