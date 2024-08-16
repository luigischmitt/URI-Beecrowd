// beecrowd | 1101 (Sequence of Numbers and Sum)

#include <stdio.h>

int main() {

    int sum, m, n;

    while (1) {
        sum = 0;
        scanf("%d %d", &m, &n);
        if (m <= 0 || n <= 0) {
            break; // Exit the loop if m or n is <= 0
        }
        if (m > n) {
            for (int i = n; i <= m; i++) {
                printf("%d ", i);
                sum += i;
            }
        } else {
            for (int i = m; i <= n; i++) {
                printf("%d ", i);
                sum += i;
            }
        }
        printf("Sum=%d\n", sum);
    }

    return 0;
}
