// Implementar um algoritmo que leia um conjunto de 50 elementos inteiros e os 
// imprima em ordem contrária da que foi lida.  

#include <stdio.h>

int main(){
    int conjunto[50];
    int TAM=50;
    int aux=0;

    for(int i=0;i<TAM;i++){
        scanf("%d",&conjunto[i]);
    }
    for(int i=0;i<(TAM/2);i++){
        aux = conjunto[i];
        conjunto[i]=conjunto[TAM-i-1];
        conjunto[TAM-i-1] = aux;
    }
    for(int i=0;i<TAM;i++){;
        printf("%d\n",conjunto[i]);
    }
}