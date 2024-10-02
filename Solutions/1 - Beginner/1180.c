// beecrowd | 1180 (Menor e Posição)

#include <stdio.h>

int main() {

    int n, menor = 1001, pos;

    scanf("%d", &n);

    int X[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &X[i]);
        if (X[i] < menor) {
            menor = X[i];
            pos = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", pos);

    return 0;
}
