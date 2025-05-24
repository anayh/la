#include <stdio.h>

int main(){
    int vetor[100];
    int m, ma,ampli;    
    m = vetor[0];
    ma= vetor[0];

    for(int i=0;i<100;i++){
        scanf("%d",&vetor[i]);
    }

    for(int i=1;i<100;i++){
        if (vetor[i]>ma){
            ma=vetor[i];
        }
        else if(vetor[i]<m){
            m=vetor[i];
        }
    }
    ampli = ma-m;
    printf("A amplitude é:%d",ampli);
    
    return 0;
}