// beecrowd | 1036 (Bhaskara's Formula)

#include <stdio.h>
#include <math.h>

int main() {

    double delta, a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    delta = b*b - 4*a*c;

    if (delta < 0 || a == 0) {
        printf("Impossivel calcular\n");
    } else {
        printf("R1 = %.5lf\n", (-b+sqrt(delta))/(2*a));
        printf("R2 = %.5lf\n", (-b-sqrt(delta))/(2*a));
    }

    return 0;
}
