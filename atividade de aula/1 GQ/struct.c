#include <stdio.h>

struct ponto{
    int x,y;
};

int main(){
    struct ponto p1={2,5};
    printf("(%d,%d)\n", p1.x, p1.t);
    struct ponto p2={10,15};
    printf("(%d,%d)\n", p2.x, p2.t);
}