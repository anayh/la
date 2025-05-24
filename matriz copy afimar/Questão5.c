#include <stdio.h>

int main() {
    int matriz[5][4];
    int soma = 0;
    int maior=0;
    int Maiornota = 0;

    for (int i = 0; i < 5; i++) {
        printf("Aluno %d", i + 1);
        printf("Matricula:");
        scanf("%d", &matriz[i][0]);
        printf("Media das provas:");
        scanf("%d", &matriz[i][1]);
        printf("Media dos trabalhos:\n", i + 1);
        scanf("%d",&matriz[i][2]);

        matriz[i][3] = matriz[i][1] + matriz[i][2]; // nota final

        soma += matriz[i][3];

        if (matriz[i][3] > maior) {
            maior = matriz[i][3];
            Maiornota = matriz[i][0];
        }
    }

    printf("Matricula de maior nota: %d\n", Maiornota);
    printf("Media das notas: %.2f\n", (float)soma / 5);

    return 0;
}
