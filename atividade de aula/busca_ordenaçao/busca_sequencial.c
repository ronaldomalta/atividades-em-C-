#include <stdio.h>

//busca sequencial
//para i de 0 ate tamanho - 1 faça
        //se vetor[i] == x entao  
        // encontrou
        // parou 

        // sizeof retorna a quantidade de bytes 

int main(){
    int v[]={8, 3, 5, 7, 8,};
    int n = sizeof(v)/sizeof(v[0]);
    int x = 7;
    int pos = -1; //-1= nao encontrado

    for (int i=0; i<n; i++) {

        if (v[i] == x) {
            pos = i; //guarda a posiçao encontrada
            break; //encerra a busca
        }
    }
    if (pos == -1){
        printf("não encontrado.\n");

    }
    else{
        printf("sequencial:%d encontado em V[%d].\n", x, pos);

    }
        
    return 0;
}