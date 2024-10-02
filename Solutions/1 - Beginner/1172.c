// beecrowd | 1172 (Substituição em Vetor I)

#include <stdio.h>

int main() {

    int vetor[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }
    
    for (int i = 0; i < 10; i++) {
        if (vetor[i] <= 0) {
            printf("X[%d] = 1\n", i);
        } else {
            printf("X[%d] = %d\n", i, vetor[i]);
        }   
    }
    
    return 0;
}
