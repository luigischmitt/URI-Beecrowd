// beecrowd | 1142 (PUM)

#include <stdio.h>

int main() {

    int j = 1, n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("%d %d %d PUM\n", j, j+1, j+2);
        j += 4;
    }

    return 0;
}
