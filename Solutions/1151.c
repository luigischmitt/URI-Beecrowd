// beecrowd | 1151 (Easy Fibonacci)

#include <stdio.h>

int main() {

    int n, aux, ant = 0, suc = 1;

    scanf("%d", &n);

    if (n > 1) {
        printf("%d ", 0);
    }
    if (n > 2) {
        printf("%d ", 1);
    }
    
    for (int i = 0; i < n-2; i++) {
        aux = ant + suc;
        ant = suc;
        suc = aux;
        printf("%d%c", aux, (i == n-3 ? '\n' : ' '));
    }

    return 0;
}
