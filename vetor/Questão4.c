// Fazer um algoritmo que leia um conjunto de 100 números inteiros. Calcule e 
// escreva a amplitude total deste conjunto.  
#include <stdio.h>

int main(){
    int conjunto[100];
    int TAM=100;
    int menor, maior,amplitude;    

    for(int i=0;i<TAM;i++){
        scanf("%d",&conjunto[i]);
    }

    menor = conjunto[0]; //faltava isso aqui
    maior = conjunto[0];

    for(int i=1;i<TAM;i++){ //começã do 1 porque o 0 ja ta sendo usado
        if (conjunto[i]>maior){
            maior=conjunto[i];
        }
        else if(conjunto[i]<menor){
            menor=conjunto[i];
        }
    }
    amplitude = maior-menor;
    printf("A amplitude total é:%d",amplitude);
    
    return 0;
}