// beecrowd | 1173 (Preenchimento de Vetor I)

#include <stdio.h>

int main() {

    int n, vetor[10];

    scanf("%d", &n);

    vetor[0] = n;

    for (int i = 1; i < 10; i++) {
        n = 2 * n;
        vetor[i] = n;
    }

    for (int i = 0; i < 10; i++) {
        printf("N[%d] = %d\n", i, vetor[i]);
    }
    
    return 0;
}
