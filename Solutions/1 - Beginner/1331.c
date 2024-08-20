// beecrowd | 1331 (Sum of Intervals)

#include <stdio.h>
 
int main() {
 
    int soma = 0, a, b, aux;

    scanf("%d %d", &a, &b);

    if (a > b) {
        aux = b;
        b = a;
        a = aux;
    }
    
    for (int i = a; i <= b; i++) {
        soma += i;
    }
    
    printf("%d\n", soma);
 
    return 0;
}
