// beecrowd | 1074 (Even or Odd)

#include <stdio.h>

int main() {
    int N, X, i = 0;

    scanf("%d", &N);

    while (i < N) {
        scanf("%d", &X);

        if (X == 0) {
            printf("NULL\n");
        } else if (X % 2 == 0) {
            if (X > 0) {
                printf("EVEN POSITIVE\n");
            } else {
                printf("EVEN NEGATIVE\n");
            }
        } else {
            if (X > 0) {
                printf("ODD POSITIVE\n");
            } else {
                printf("ODD NEGATIVE\n");
            }
        }
        i++;
    }

    return 0;
}
