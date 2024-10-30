// beecrowd | 2137 (A Biblioteca do Senhor Severino)

#include <string.h>
#include <stdio.h>

int main() {

    int n;

    while (scanf("%d", &n) != EOF) {

        char cadastro[n][5];    // Para garantir que o '\0' caiba
        
        // Leitura dos códigos
        for (int i = 0; i < n; i++) {
            scanf("%s", cadastro[i]);
        }
        
        // Tipo um sort usando o strcmp
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (strcmp(cadastro[i], cadastro[j]) > 0) { // Se o código na pos. antecessora for maior que o na pos. sucessora, devem trocar de lugar
                    char temp[5];
                    strcpy(temp, cadastro[i]);
                    strcpy(cadastro[i], cadastro[j]);
                    strcpy(cadastro[j], temp);
                }
            }
        }

        // Imprime os códigos ordenados
        for (int i = 0; i < n; i++) {
            printf("%s\n", cadastro[i]);
        }

    }

    return 0;
}
