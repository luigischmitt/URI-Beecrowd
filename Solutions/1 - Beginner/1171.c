// beecrowd | 1171 (Frequência de Números)

#include <stdio.h>

int main() {

    int x, arr[2001] = {0}, n;

    scanf("%d", &n);

    while (n--) {
        scanf("%d", &x);
        for (int i = 1; i <= 2000; i++) {
            if (i == x) {
                arr[i] += 1;
            }   
        }
    }

    for (int i = 1; i <= 2000; i++) {
        if (arr[i] > 0) {
            printf("%d aparece %d vez(es)\n", i, arr[i]);
        }
    }

    return 0;
}
