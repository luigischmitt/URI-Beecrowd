// beecrowd | 1042 (Simple Sort)

#include <stdio.h>
int main() {
    int a, b, c;
    int sorted[3];

    scanf("%d %d %d", &a, &b, &c);

    sorted[0] = a;
    sorted[1] = b;
    sorted[2] = c;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (sorted[j] > sorted[j + 1]) {
                int temp = sorted[j];
                sorted[j] = sorted[j + 1];
                sorted[j + 1] = temp;
            }
        }
    }

    printf("%d\n%d\n%d\n", sorted[0], sorted[1], sorted[2]);

    printf("\n");

    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}
