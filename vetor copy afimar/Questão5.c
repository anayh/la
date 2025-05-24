#include <stdio.h>

int main(){
    int vetor[100];
    int s=0;
    float media;
    

    for(int i=0;i<100;i++){
        scanf("%d",&vetor[i]);
        s+=vetor[i];
    }

    media=s/100;
    printf("Media: %2.f",media);

    return 0;
}