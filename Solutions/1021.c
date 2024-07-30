// beecrowd | 1021 (Banknotes and Coins)

#include <stdio.h>

int main() {
    double notes;
    int amount, aux;

    scanf("%lf", &notes);

    amount = (int)notes; // Converting the input to an integer amount in cents
    notes = notes * 100; // Working with the value in cents to avoid precision issues
    aux = (int)notes;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", amount / 100);
    amount %= 100;

    printf("%d nota(s) de R$ 50.00\n", amount / 50);
    amount %= 50;

    printf("%d nota(s) de R$ 20.00\n", amount / 20);
    amount %= 20;

    printf("%d nota(s) de R$ 10.00\n", amount / 10);
    amount %= 10;

    printf("%d nota(s) de R$ 5.00\n", amount / 5);
    amount %= 5;

    printf("%d nota(s) de R$ 2.00\n", amount / 2);
    amount %= 2;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", amount);
    aux %= 100; // Remaining amount in cents

    printf("%d moeda(s) de R$ 0.50\n", aux / 50);
    aux %= 50;

    printf("%d moeda(s) de R$ 0.25\n", aux / 25);
    aux %= 25;

    printf("%d moeda(s) de R$ 0.10\n", aux / 10);
    aux %= 10;

    printf("%d moeda(s) de R$ 0.05\n", aux / 5);
    aux %= 5;

    printf("%d moeda(s) de R$ 0.01\n", aux);

    return 0;
}

