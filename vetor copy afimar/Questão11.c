#include <stdio.h>

#define N 15
#define SM 1518.00

int main() {
    int cod[N];
    int pecas[N];
    int sexo[N];
    float sal[N];
    float total = 0.0;

    for (int i = 0; i < N; i++) {
        printf("\nFuncionário %d\n", i + 1);

        printf("Código: ");
        scanf("%d", &cod[i]);

        printf("Peças: ");
        scanf("%d", &pecas[i]);

        printf("Sexo (1-Masc, 2-Fem): ");
        scanf("%d", &sexo[i]);

        int p = pecas[i];

        if (p <= 30) {
            sal[i] = SM;
        } else if (p <= 35) {
            sal[i] = SM + (p - 30) * 0.03 * SM;
        } else {
            sal[i] = SM + (p - 30) * 0.05 * SM;
        }

        total += sal[i];
    }


    printf("Cod\tPcs\tSalário\n");
    for (int i = 0; i < N; i++) {
        printf("%d\t%d\tR$ %.2f\n", cod[i], pecas[i], sal[i]);
    }

    printf("Folha total: R$ %.2f\n", total);

    return 0;
}
