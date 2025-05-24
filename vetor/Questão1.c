//Fazer um algoritmo que leia a nota de 10 alunos de uma disciplina. Calcule e escreva o número de alunos que tiveram notas superior à média da turma.  

#include <stdio.h>
#define TAM 10

int main(){
    float soma,media;
    float notas[TAM];
    int c=0;

    for(int i=0; i<TAM;i++){ //i>=10 não existe
        scanf("%f",&notas[i]);        
        
        soma = soma+notas[i];
        media = soma/TAM;

        if (notas[i]>=media){
            c=c+1;
        }
    }
    
    for(int i=0; i<TAM;i++){
        printf("Notas: %f,",notas[i]);
    }
    printf("A media é %f\n",media);
    printf("pessoas: %d\n",c);
}

/* #include <stdio.h>
#define TAM 10

int main() {
    float soma = 0, media;
    float notas[TAM];
    int c = 0;

    // Leitura das notas
    for (int i = 0; i < TAM; i++) {
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    // Cálculo da média
    media = soma / TAM;

    // Contar alunos com nota acima da média
    for (int i = 0; i < TAM; i++) {
        if (notas[i] >= media) {
            c++;
        }
    }

    // Imprimir todas as notas
    printf("Notas: ");
    for (int i = 0; i < TAM; i++) {
        printf("%.2f ", notas[i]);
    }

    printf("\nA média é %.2f\n", media);
    printf("Pessoas com nota acima da média: %d\n", c);

    return 0;
}
 */