// beecrowd | 1161 (Soma de Fatoriais)

#include <stdio.h>

unsigned long long fat(int x) {
    if (x == 0)
        return 1;
    if (x == 1)
        return x;
    return x * fat(x-1);
}

int main() {

    int n, m;
    unsigned long long soma = 0;

    while (scanf("%d %d", &n, &m) != EOF) {
        soma += fat(n);
        soma += fat(m);

        printf("%llu\n", soma);
        soma = 0;               // Zerando a soma a cada interação
    }

    return 0;
}
