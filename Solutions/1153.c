// beecrowd | 1153 (Simple Factorial)

#include <stdio.h>

int main() {

    int fatorial = 1, n;

    scanf("%i", &n);

    for (; 1 <= n; n--) {
        fatorial *= n;
    }
    
    printf("%i\n", fatorial);

    return 0;
}
