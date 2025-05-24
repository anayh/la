#include <stdio.h>

int main(){
    int vetor[10];
    int x=0;

    for(int i=0;i<10;i++){
        scanf("%d",&vetor[i]);
    }
    for(int i=0;i<(10/2);i++){
        x = vetor[i];
        vetor[i]=vetor[10-i-1];
        vetor[10-i-1] = x;
    }
    for(int i=0;i<10;i++){;
        printf("%d\n",vetor[i]);
    }
}