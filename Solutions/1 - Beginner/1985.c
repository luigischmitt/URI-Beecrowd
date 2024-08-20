// beecrowd | 1985 (MacPRONALTS)

#include <stdio.h>
 
int main() {
 
    int n;
    float total = 0, t, q;

    scanf("%d", &n);

    while (n--) {
        scanf("%f %f", &t, &q);
        if (t == 1001) {
            total += 1.5*q;
        } else if (t == 1002) {
            total += 2.5*q;
        } else if (t == 1003) {
            total += 3.5*q;
        } else if (t == 1004) {
            total += 4.5*q;
        } else if (t == 1005) {
            total += 5.5*q;
        }
    }
    
    printf("%.2f\n", total);
 
    return 0;
}
