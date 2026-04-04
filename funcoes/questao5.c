#include<stdio.h>

float operaçao(float num1, float num2, char cod){
    switch(cod){
        case '+':
        return num1 + num2;
        case '-':
        return num1 - num2;
        case'*':
        return num1 * num2;
        case'/':
        if (num2!= 0){
            return num1/num2; 
        }else{
            return 0;
        }
    }
}