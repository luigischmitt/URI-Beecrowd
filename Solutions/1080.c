// beecrowd | 1080 (Highest and Position)

#include <stdio.h>

int main() {

    int n, maior = -100000, pos = 0;

    for (int i = 1; i <= 100; i++) {
        scanf("%d", &n);
        if (n > maior) {
            maior = n;
            pos = i;
        }
    }
    
    printf("%d\n", maior);
    printf("%d\n", pos);

    return 0;
}
