// beecrowd | 1169 (Trigo no Tabuleiro)

#include <stdio.h>
#include <math.h>

int main() {

    int n, x;
    long long unsigned soma_pg = 0, kg;

    scanf("%d", &n);

    while (n--) {
        scanf("%d", &x);

        soma_pg = (1*(pow(2, x) - 1));

        kg = soma_pg / 12000;

        printf("%llu kg\n", kg);
    }

    return 0;
}
