// beecrowd | 1168 (LED)

#include <stdio.h>
#include <string.h>

int main() {

    char str[102];
    int soma, t, valor[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6}; // Valor de 0 a 9 em leds

    scanf("%d", &t);

    while (t--) {
        soma = 0;
        scanf("%s", str);
        
        for (int i = 0; i < strlen(str); i++) {
            soma += valor[str[i] - '0'];        // '0' == 48 (int)
        }

        printf("%d leds\n", soma);
    }
    
    return 0;
}
