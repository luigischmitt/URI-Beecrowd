// beecrowd | 1066 (Even, Odd, Positive and Negative)

#include <stdio.h>

int main() {

    int even=0, odd=0, pos=0, neg=0, n;

    for (int i = 1; i <= 5; i++) {
        scanf("%d", &n);
        if (n > 0) {
            pos++;
        } else if (n < 0) {
            neg++;
        }

        if (n % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);
    
    return 0;
}
