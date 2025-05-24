// 05 - Faça um programa que leia uma matriz de 5 linhas e 4 colunas contendo as 
// seguintes informações sobre alunos de uma disciplina, sendo todas as 
// informações do tipo inteiro: 
// • Primeira coluna: número de matrícula (use um inteiro) 
// • Segunda coluna: média das provas 
// • Terceira coluna: média dos trabalhos 
// • Quarta coluna: nota final 

#include <stdio.h>

#define ALUNOS 5
#define COLUNAS 4

int main() {
    int matriz[ALUNOS][COLUNAS];
    int somaNotas = 0;
    int maiorNota = -1;
    int matriculaMaior = 0;

    for (int i = 0; i < ALUNOS; i++) {
        printf("Aluno %d - Matricula, media provas e media trabalhos:\n", i + 1);
        scanf("%d %d %d", &matriz[i][0], &matriz[i][1], &matriz[i][2]);

        matriz[i][3] = matriz[i][1] + matriz[i][2]; // nota final

        somaNotas += matriz[i][3];

        if (matriz[i][3] > maiorNota) {
            maiorNota = matriz[i][3];
            matriculaMaior = matriz[i][0];
        }
    }

    printf("Matricula de maior nota: %d\n", matriculaMaior);
    printf("Media das notas: %.2f\n", (float)somaNotas / ALUNOS);

    return 0;
}
