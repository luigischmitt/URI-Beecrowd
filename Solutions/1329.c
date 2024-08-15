// beecrowd | 1329 (Head or Tail)

#include <stdio.h>

int main() {

    int m = 0, j = 0, n, aux;

    while (1) {
        scanf("%d", &n);

        if (n == 0) {
            break;
        }

        for (int i = 1; i <= n; i++) {
            scanf("%d", &aux);
            if (aux == 0) {
                m++;
            } else if (aux == 1) {
                j++;
            }
        }
        printf("Mary won %d times and John won %d times\n", m, j);
        m = 0;
        j = 0;
    }

    return 0;
}
