// Fazer um algoritmo que leia um conjunto de 100 números inteiros; leia também 
// um valor para variável x e verifique se o valor de x existe no conjunto lido.   

#include <stdio.h>

int main(){
    int vetor[100];
    int x;
    int encontrado = 0;

    for(int i=0;i<100;i++){
        scanf("%d",&vetor[i]);
    }
    scanf("%d",&x);

    for(int i=0;i<100;i++){;
        if (vetor[i]==x){
            printf("X = %d esta dentro do vetor");
            encontrado=1;
            break;
        }
    }
    if(!encontrado){
        printf("Não tem dentro do vetor");
    }
    return 0;
}