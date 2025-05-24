// 8 - Fazer um algoritmo que leia dois conjuntos de 30 números inteiros. Calcule e 
// escreva um terceiro conjunto fruto da intercalação dos dois primeiros. 

#include <stdio.h>

#define TAM 30
#define TAM2 60

void LerConjunto(int conjunto[],int conjunto2[]) {
    for (int i = 0; i < TAM; i++) {
        scanf("%d", &conjunto[i]);
    }
    for (int i = 0; i < TAM; i++) {
        scanf("%d", &conjunto2[i]);
    }
}
void Intercalando(int conjunto[],int conjunto2[],int conjunto3[]){
    int j =0;
    for(int i=0;j<TAM ;i+=2,j++){
        conjunto3[i]=conjunto[j];
        conjunto3[i+1]=conjunto2[j];
        
    }
}

int main(){
    int conjunto[TAM];
    int conjunto2[TAM];
    int conjunto3[TAM2];

    LerConjunto(conjunto,conjunto2);
    Intercalando(conjunto,conjunto2,conjunto3);

    
    for (int i = 0; i < TAM; i++) {
        printf("%d\n", conjunto[i]);
    }
    for (int i = 0; i < TAM; i++) {
        printf("%d\n", conjunto2[i]);
    }
    for (int i = 0; i < TAM2; i++) {
        printf("%d", conjunto3[i]);
    }
    return 0;
}