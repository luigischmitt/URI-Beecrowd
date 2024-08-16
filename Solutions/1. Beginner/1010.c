// beecrowd | 1010 (Simple Calculate)

#include <stdio.h>

int main() {
    int cod1, num1, cod2, num2;
    double val1, val2, total;

    printf("Enter code1, number1, value1: ");
    scanf("%d %d %lf", &cod1, &num1, &val1);

    printf("Enter code2, number2, value2: ");
    scanf("%d %d %lf", &cod2, &num2, &val2);

    total = (num1 * val1) + (num2 * val2);

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}
