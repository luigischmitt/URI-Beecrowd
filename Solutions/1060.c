// beecrowd | 1060 (Positive Numbers)

#include <stdio.h>
 
int main() {
 
    int positives = 0;
    float n;

    for (int i = 1; i <= 6; i++) {
        scanf("%f", &n);
        if (n > 0) {
            positives += 1;
        }
    }
    
    printf("%d valores positivos\n", positives);
 
    return 0;
}
