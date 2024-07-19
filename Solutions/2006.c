// beecrowd | 2006 (Identifying Tea)

#include <stdio.h>

int main() {

    int count = 0, T, A, B, C, D, E;

    scanf("%d", &T);
    scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);

    if (A == T)
        count += 1;
    if (B == T)
        count += 1;
    if (C == T)
        count += 1;
    if (D == T)
        count += 1;
    if (E == T)
        count += 1;

    printf("%d\n", count);

    return 0;
}
