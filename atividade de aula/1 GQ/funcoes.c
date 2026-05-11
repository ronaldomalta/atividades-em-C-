#include <stdio.h>
int funcaoB(){
    printf("(funcaoB)valor de x: %d",x);
}
void funcaoA(){
    int x= 20 
    funcaoB(x);
    printf("(funcaoA)valor de x: %d",x);

}
int main(){
    int x= 10 
    printf("(main)valor de x :%d\n", x);
    funcaoA();
    int i=10;
    for(int i=10; i<2; i++){
        x++;
    }
    printf("(main)valor de i: %d",i);
    return 0;

}