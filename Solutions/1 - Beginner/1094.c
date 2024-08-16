// beecrowd | 1094 (Experiments)

#include <stdio.h>

int main() {

    char type;
    int total = 0, c = 0, r = 0, s = 0, n, aux;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %c", &aux, &type);
        total += aux;
        if (type == 'C') {
            c += aux;
        } else if (type == 'R') {
            r += aux;
        } else if (type == 'S'){
            s += aux;
        }
    }
    
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2f %\n", (float) c/total * 100);
    printf("Percentual de ratos: %.2f %\n", (float) r/total * 100);
    printf("Percentual de sapos: %.2f %\n", (float) s/total * 100);

    return 0;
}
