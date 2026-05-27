#include <stdio.h>
#include <stdlib>

int duplica(int x){
    return x * 2;
}
int incrementa(int x){
    return x + 1;
}
int processo(int x){
    x = incrementa(x);
    x = duplica(x);
    return x;
}

int main(){
    int x= 10;
    processo(x);  
    
    int *p;

    p= malloc(10*sizeof(int));

    if (p==NULL){
        printf("erro de alocacao\n");
        return 1;
    }
    p[0] = 10;
    p[1] = 20;
    p[2] = 30;

    printf("p[1]= %d ", p1);
    printf("p[2]= %d ", p1 + 1);
    printf("p[3]= %d ", p1 + 2);

    return 0;
}

