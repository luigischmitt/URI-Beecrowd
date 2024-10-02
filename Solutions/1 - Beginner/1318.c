// beecrowd | 1318 (Bilhetes Falsos)

#include <stdio.h>

int main() {

    int n, m, x, count;

    while (1) {
        scanf("%d %d", &n, &m);
        if (n == 0 && m == 0)
            break;  
        
        int arr[20001] = {0}; 
        count = 0;
        
        for (int i = 0; i < m; i++) {
            scanf("%d", &x);
            arr[x] += 1;  
        }
        
        for (int i = 1; i <= 20000; i++) {
            if (arr[i] >= 2) {              // Repetidos
                count++; 
            }
        }
        
        printf("%d\n", count);  
    }
    
    return 0;
}
