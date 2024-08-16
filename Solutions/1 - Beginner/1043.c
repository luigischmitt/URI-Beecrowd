// beecrowd | 1043 (Triangle)

#include <stdio.h>

int main() {

    float a, b, c, aux;

    scanf("%f %f %f", &a, &b, &c);

    /* coloca o maior dos numeros dados no a */
    if (b > a){
        aux = a;
        a = b;
        b = aux;
    }
    if (c > a){
        aux = a;
        a = c;
        c = aux;
    }

    if (a <  b + c) {
        printf("Perimetro = %.1f\n", a+b+c);
    } else {
        printf("Area = %.1f\n", ((a+b)*c)/2);
    }
 
    return 0;
}

