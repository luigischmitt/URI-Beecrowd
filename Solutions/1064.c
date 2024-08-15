// beecrowd | 1064 (Positives and Average)

#include <stdio.h>
 
int main() {
 
    int positives = 0;
    float n, avg = 0;

    for (int i = 1; i <= 6; i++) {
        scanf("%f", &n);
        if (n > 0) {
            positives += 1;
            avg += n;
        }
    }
    
    printf("%d valores positivos\n", positives);
    printf("%.1f\n", avg/positives);
 
    return 0;
}
