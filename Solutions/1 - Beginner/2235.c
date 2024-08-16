// beecrowd | 2235 (Walking in Time)

#include <stdio.h>

int main() {
    int A, B, C;

    // Read input values
    scanf("%d %d %d", &A, &B, &C);

    // Check the conditions
    if (A == B || A == C || B == C) {
        printf("S\n");
    } else if (A == B + C || B == A + C || C == A + B) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}
