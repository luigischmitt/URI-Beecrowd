// beecrowd | 1143 (Squared and Cubic)

#include <stdio.h>
 
int main() {
 
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d %d %d\n", i, i*i, i*i*i);
    }
    
 
    return 0;
}
