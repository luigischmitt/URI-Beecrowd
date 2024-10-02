// beecrowd | 1228 (Grid de Largada)

#include <stdio.h>

int main() {
    int n, start[24], end[24];

    while (scanf("%d", &n) != EOF) {
        for (int i = 0; i < n; i++) {
            scanf("%d", &start[i]);
        }
        for (int i = 0; i < n; i++) {
            scanf("%d", &end[i]);
        }

        int trocas = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1; j++) {
                int pos_j = -1, pos_j_mais_1 = -1;

                // Encontrar as posições de start[j] e start[j + 1] no array end
                for (int k = 0; k < n; k++) {
                    if (end[k] == start[j])
                        pos_j = k;
                    if (end[k] == start[j + 1])
                        pos_j_mais_1 = k;
                }

                // Se a posição de start[j] for maior que a de start[j + 1], fazemos a troca
                if (pos_j > pos_j_mais_1) {
                    int temp = start[j];
                    start[j] = start[j + 1];
                    start[j + 1] = temp;
                    trocas++;
                }
            }
        }

        printf("%d\n", trocas);
    }

    return 0;
}
