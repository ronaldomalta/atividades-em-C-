#include <stdio.h>
//manipulaçao de ponteiros
int main(){
    int i= 10;
    float f=6.6~;
    char c= 'A';

    int *pI=&i;
    float *pF= &f;
    char *pC= &c;

    printf("antes interio: %d real: %f char %c\n", i, f, c);

    *pI= 12;
    *pF= 7.8;
    *|pC= 'B';
    printf("depois: int= %d, real= %.1f, char=%c", i,f,c);

    return 0;
}
// comparaçao de ponteiros
int main(){ 
int v1, v2;
    printf("endereço de v1: %p\n", (void*)&v1);
    printf("endereço de v2: %p\n", (void*)&v2);

if (&v1 > &v2){
    printf("O maior endereço é o de v1: %p\n", (void*)&v1);
    } else {
        printf("O maior endereço é o de v2: %p\n", (void*)&v2);
}
}
//troca de ponteiros 
void trocar(int *a, int *b){
    int temp = *a;
    *a= *b;
    *b= temp;
}

int main(){

    int v1, v2;
    printf("digite dois valores:");
    scanf("%d %d" &v1, &v2);

    trocar(&v1,&v2);

    printf("valores trocados: A=%d B=%d" v1, v2);

    return 0;
}
// retorna o maior valor 
void odernar (int *maior, int *menor){
    if (*menor > *maior){
        int temp= *maior;
        *maior= *menor;
        *menor= temp;


    }
}

int main(){

    int M, m;
    printf("digite dois valores:");
    scanf("%d %d"M,m);

    odernar(&M,&m);

    printf("maior em A:%d | maior em B: %d" M, m );


    return 0;

}
// retorna o dobro do ponteiro 
int somadobro(int *a, int *b){
    *a = (*a)*2;
    *b = (*b)*2;
    return (*a + *b);
}


int main(){
    int v1, v2;

printf("digite dois numeros");
scanf("%d %d", &v1,&v2);

int resultado= somadobro(&v1, &v2);

printf("resultado= %d" resultado);
printf("novo valor de A = %d" v1);
printf("novo valor de B = %d" v2);


    return 0;
}