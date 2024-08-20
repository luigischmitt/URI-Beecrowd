// beecrowd | 1868 (Desconto Progressivo)

#include <stdio.h>
 
int main() {
 
    double p, q, d = 0;

    scanf("%lf %lf", &p, &q);

    if (q < 2) {
        d = p *1.0;
        printf("%.2lf\n", d);
    } else if (q == 2) {
        d = p*0.95;
        printf("%.2lf\n", d);
    } else if (q > 2 && q <= 4) {
        d = p*0.90;
        printf("%.2lf\n", d);
    } else if (q > 4 && q <= 6) {
        d = p*0.80;
        printf("%.2lf\n", d);
    } else {
        d = p*0.70;
        printf("%.2lf\n", d);
    }
    
    return 0;
}
