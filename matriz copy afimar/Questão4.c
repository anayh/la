#include <stdio.h>

int main() {
    char respostas[5][10];
    char gabarito[10];
    int acertos[5] = {0};

    printf("Gabarito:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%c", &gabarito[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("Respostas do aluno %d:\n", i + 1);
        for (int j = 0; j < 10; j++) {
            scanf(" %c", &respostas[i][j]);
            if (respostas[i][j] == gabarito[j])
                acertos[i]++;
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("Aluno %d: %d acertos\n", i + 1, acertos[i]);
    }

    return 0;
}
