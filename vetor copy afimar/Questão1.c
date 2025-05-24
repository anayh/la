#include <stdio.h>


int main() {
    float notas[10];
    float total = 0;
    float media;
    int acima_da_media = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%f", &notas[i]);
        total += notas[i];
    }

    media = total / 10;

    for (int i = 0; i < 10; i++) {
        if (notas[i] >= media) {
            acima_da_media++;
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("Nota %d: %.2f\n", i + 1, notas[i]);
    }

    printf("Média: %.2f\n", media);
    printf("Notas maiores que a media: %d\n", acima_da_media);

    return 0;
}
