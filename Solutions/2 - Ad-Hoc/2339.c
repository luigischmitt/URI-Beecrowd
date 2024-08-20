// beecrowd | 2339 (Aviões de Papel)

#include <stdio.h>
 
int main() {
 
    int c, f, d;

    scanf("%d %d %d", &c, &f, &d);

    if (c <= f / d) {
        printf("S\n");
    } else {
        printf("N\n");
    }
    
    return 0;
}
