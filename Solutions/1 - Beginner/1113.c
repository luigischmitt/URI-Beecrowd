// beecrowd | 1113 (Crescente e Decrescente)

#include <stdio.h>
 
int main() {
 
    int a, b;

    while (1) {
        scanf("%d %d", &a, &b);
        if (a == b) {
            break;
        } else if (a > b) {
            printf("Decrescente\n");
        } else {
            printf("Crescente\n");
        }
    }
    
    return 0;
}
