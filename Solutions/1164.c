// beecrowd | 1164 (Perfect Number)

#include <stdio.h>

int main() {

    int t, sum, n;

    scanf("%d", &t);

    while(t--) {
        scanf("%d", &n);
        sum = 0;
        for (int i = 1; i < n; i++) {
            if (n % i == 0) {
                sum += i;
            }
        }
        if (sum == n) {
            printf("%d eh perfeito\n", n);
        } else {
            printf("%d nao eh perfeito\n", n);
        }
    }
    
    return 0;
}