//  beecrowd | 1589 (Bob Conduit)

#include <stdio.h>

int main() {

    int n, r1, r2;

    scanf("%d", &n);

    while (n > 0) {
        scanf("%d %d", &r1, &r2);
        printf("%d\n", r1+r2);
        --n;
    }

    return 0;
}
