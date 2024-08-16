// beecrowd | 1051 (Taxes)

#include <stdio.h>

int main() {
    float n, tax = 0.0;

    scanf("%f", &n);

    if (n <= 2000) {
        printf("Isento\n");
    } else {
        if (n > 4500) {
            tax += (n - 4500) * 0.28;
            n = 4500;
        }
        if (n > 3000) {
            tax += (n - 3000) * 0.18;
            n = 3000;
        }
        if (n > 2000) {
            tax += (n - 2000) * 0.08;
        }
        printf("R$ %.2f\n", tax);
    }

    return 0;
}
