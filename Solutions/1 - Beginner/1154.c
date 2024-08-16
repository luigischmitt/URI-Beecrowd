// beecrowd | 1154 (Ages)

#include <stdio.h>

int main() {

    float count = 0, sum = 0, n;

    do {
        scanf("%f", &n);
        if (n >= 0) {
            sum += n;
            ++count;
        }
    } while (n >= 0);
    
    if (count > 0) {
        float mean = sum / count;
        printf("%.2f\n", mean);
    }

    return 0;
}
