// beecrowd | 1009 (Salary with Bonus)

#include <stdio.h>

int main() {
    char name[50];
    double profit, sales, comissao, total;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter profit: ");
    scanf("%lf", &profit);

    printf("Enter sales: ");
    scanf("%lf", &sales);

    comissao = sales * 0.15;

    total = comissao + profit;

    printf("TOTAL = R$ %.2f\n", total);

    return 0;
}
