// beecrowd | 2356 (Bactéria I)

#include <stdio.h>
#include <string.h>

int main() {
    char D[101], S[101];

    while (scanf("%s", D) != EOF) { // Não precisa de & porque já é um endereço 
        scanf("%s", S);

        if (strstr(D, S) != NULL) {
            puts("Resistente");
        } else {
            puts("Nao resistente");
        }
    }

    return 0;
}
