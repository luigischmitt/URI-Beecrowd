// beecrowd | 2791 (Feijão)

#include <stdio.h>
 
int main() {
 
    int feijao[4];

    for (int i = 0; i <= 3; i++) {
        scanf("%d", &feijao[i]);
        if (feijao[i] == 1) {
            printf("%d\n", i+1);
        }   
    }
    
    return 0;
}
