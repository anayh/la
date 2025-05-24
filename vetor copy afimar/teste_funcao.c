#include <stdio.h>

#define TAM 5

int LerConjunto(int conjunto[]){;
    int soma=0;
    for(int i=0;i<TAM;i++){
        scanf("%d",&conjunto[i]);
        soma+=conjunto[i];
    }
}
int main(){
    int conjunto[TAM];

    LerConjunto(conjunto);
    
    for(int i=0;i<TAM;i++){
        printf("%d",conjunto[i]);
    }
}

