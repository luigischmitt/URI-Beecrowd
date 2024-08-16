// beecrowd | 1397 (Game of The Greatest)

#include <stdio.h>

int main() {

    int score_a = 0, score_b = 0, a, b, n = 1;

    while (1) {
        scanf("%d", &n);

        if (n == 0) {
            break;
        }
        
        for (int i = 1; i <= n; i++) {
            scanf("%d %d", &a, &b);
            if (a > b) {
                score_a += 1;
            } else if (b > a) {
                score_b += 1;
            }
        }

        printf("%d %d\n", score_a, score_b);
        score_a = 0;
        score_b = 0;
    }

    return 0;
}
