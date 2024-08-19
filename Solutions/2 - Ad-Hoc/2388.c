// beecrowd | 2388 (Tacógrafo)

#include <stdio.h>
 
int main() {
 
    int soma = 0, n, t1, t2;

    scanf("%d", &n);

    while (n--) {
        scanf("%d %d", &t1, &t2);
        soma += t1*t2;
    }
    
    printf("%d\n", soma);
 
    return 0;
}
