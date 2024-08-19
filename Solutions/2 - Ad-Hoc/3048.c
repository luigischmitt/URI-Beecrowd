// beecrowd | 3048 (Sequência Secreta)

#include <stdio.h>
 
int main() {
 
    int cont = 0, n, i, j = 0;

    scanf("%d", &n);

    while (n--) {
        scanf("%d", &i);
        if (i != j) {
            cont++;
        }
        j = i;
    }

    printf("%d\n", cont);
 
    return 0;
}
