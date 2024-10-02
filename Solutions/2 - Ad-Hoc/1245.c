// beecrowd | 1245 (Botas Perdidas)

#include <stdio.h>

int main() {
    int N;  

    while (scanf("%d", &N) != EOF) {
        int botasEsq[31] = {0}; 
        int botasDir[31] = {0}; 
        int tamanho;
        char lado;
        int pares = 0;

        for (int i = 0; i < N; i++) {
            scanf("%d %c", &tamanho, &lado);

            if (lado == 'E') {
                botasEsq[tamanho - 30]++;  
            } else {
                botasDir[tamanho - 30]++;
            }
        }

        for (int i = 0; i <= 30; i++) {
            pares += (botasEsq[i] < botasDir[i]) ? botasEsq[i] : botasDir[i];
        }

        printf("%d\n", pares);
    }

    return 0;
}

