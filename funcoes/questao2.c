#include<stdio.h>

int verificarsinal(int n){
    if (n > 0){
        return 1;
    }
    else if(n < 0){
        return -1;
    }
    else(){
        return 0;
    }
}