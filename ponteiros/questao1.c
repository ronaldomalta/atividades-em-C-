#include<stdio.h>
//manipulaçao de ponteiros
int main(){
    int i=10
    float f=6.6
    char c= 'A';

    int   *pI= &i
    float *pF= &f
    char  *pC= &c

    printf("antes interio: %d real: %f char %c\n", i, f, c);

        *pI= 12;
        *pF= 7.8;
        *pC= 'B';
    printf("Depois: int=%d, real=%.1f, char=%c\n", i, f, c);

    return 0;
}