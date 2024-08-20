// beecrowd | 2936 (Quanta Mandioca?)

#include <stdio.h>

int main() {

    int soma = 0, a, b, c, d, e;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    soma += 300*a;
    soma += 1500*b;
    soma += 600*c;
    soma += 1000*d;
    soma += 150*e;
    soma += 225;

    printf("%d\n", soma);

    return 0;
}
