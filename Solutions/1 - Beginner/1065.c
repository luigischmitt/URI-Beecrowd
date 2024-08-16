// beecrowd | 1065 (Even Between five Numbers)

#include <stdio.h>
 
int main() {
 
    int n, even = 0;

    for (int i = 1; i <= 5; i++) {
        scanf("%d", &n);
        if (n % 2 == 0) {
            even += 1;
        }
    }
    
    printf("%d valores pares\n", even);
 
    return 0;
}
