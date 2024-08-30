// beecrowd | 1079 (Médias Ponderadas)

#include <stdio.h>
 
int main() {
 
    int n;
    float media, a, b, c;

    scanf("%d", &n);

    while (n--) {
        scanf("%f %f %f", &a, &b, &c);
        media = (2*a + 3*b + 5*c) / 10;
        printf("%.1f\n", media);
    }
 
    return 0;
}
