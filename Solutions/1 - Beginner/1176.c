// beecrowd | 1176 (Fibonacci em vetor)

#include <stdio.h>

int main() {
    unsigned long long fib[61];  // Ajustado para comportar até fib[60]
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= 60; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    int t, n;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);
        printf("Fib(%d) = %llu\n", n, fib[n]);
    }
    
    return 0;
}
