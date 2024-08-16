// beecrowd | 2454 (Flíper)

#include <stdio.h>

int main() {

    int P, R;

    scanf("%d %d", &P, &R);

    if (!P) {
        printf("C\n");
    } else if (!R) {
        printf("B\n");
    } else {
        printf("A\n");
    }

    return 0;
}
