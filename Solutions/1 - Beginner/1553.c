// beecrowd | 1553 (Perguntas mais Frequentes)

#include <stdio.h>

int main() {
    int n, k, x, count;
    
    while (1) {
        scanf("%d %d", &n, &k);
        if (n == 0 && k == 0)
            break;  
        
        int arr[1001] = {0}; 
        count = 0;
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &x);
            arr[x] += 1;  
        }
        
        for (int i = 1; i <= 1000; i++) {
            if (arr[i] >= k) {
                count++; 
            }
        }
        
        printf("%d\n", count);  
    }

    return 0;
}

