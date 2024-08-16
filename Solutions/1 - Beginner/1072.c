// beecrowd | 1072 (Interval 2)

#include <stdio.h>

int main() {

    int count_in = 0, count_out = 0, n, X;

    scanf("%d", &n);

    while (n > 0) {
        scanf("%d", &X);
        if (X >= 10 && X <= 20) {
            ++count_in;
        } else {
            ++count_out;
        }
        --n;
    } 

    printf("%d in\n", count_in);
    printf("%d out\n", count_out);

    return 0;
}
