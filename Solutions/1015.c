// beecrowd | 1015 (Distance Between Two Points)

#include <stdio.h>
#include <math.h>

int main() {

    double d, x1, x2, y1, y2;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    d = pow(x2-x1, 2) + pow(y2-y1, 2);

    printf("%.4lf\n", sqrt(d));

    return 0;
}
