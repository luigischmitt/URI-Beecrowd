// beecrowd | 1181 (Linha na Matriz)

#include <stdio.h>

int main() {

    char option;
    int L;
    float S = 0, M = 0, Matrix[12][12];

    scanf("%d", &L);
    scanf(" %c", &option);  // Espaço antes de %c para ignorar o '\n'

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%f", &Matrix[i][j]);  // Usar %f para ler float
        }
    }
    
    if (option == 'S') {
        for (int i = 0; i < 12; i++) {
            S += Matrix[L][i];  // Soma os elementos da linha L
        }
        printf("%.1f\n", S);    // Imprime a soma com 1 casa decimal
    } else if (option == 'M') {
        for (int i = 0; i < 12; i++) {
            S += Matrix[L][i];  // Soma os elementos da linha L
        }
        M = S / 12;             // Calcula a média
        printf("%.1f\n", M);    // Imprime a média com 1 casa decimal
    }

    return 0;
}
