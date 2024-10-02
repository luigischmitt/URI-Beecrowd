// beecrowd | 1228 (Grid de Largada)

#include <stdio.h>

int main() {

    int n;

    for (int i = 0; i < 3; i++) {
        scanf("%d", &n);

        int saida[n];
        int chegada[n];

        for (int j = 0; i < n; i++) {
            scanf("%d", saida[j]);
        }
        for (int j = 0; i < n; i++) {
            scanf("%d", chegada[j]);
        }

        int ultrapassagens = 0;

        // Percorre a lista de chegada
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                // Encontra o carro da posição de chegada na lista de largada
                if (saida[j] == chegada[i]) {
                    // Agora, empurra o carro para frente até a posição i
                    while (j > i) {
                        // Troca de posições no array de largada
                        int temp = saida[j];
                        saida[j] = saida[j - 1];
                        saida[j - 1] = temp;
                        j--;
                        ultrapassagens++;  // Conta a troca como uma ultrapassagem
                    }
                    break;
                }
            }
        }

        printf("%d\n", ultrapassagens);
    }

    return 0;
}
