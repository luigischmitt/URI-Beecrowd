// beecrowd | 1020 (Age in Days)

#include <stdio.h>

int main() {

    int y, m, d, n;
    
    scanf("%d", &n);

    y = n / 365;
    n = n % 365;
    m = n / 30;
    n = n % 30;
    d = n;

    printf("%d ano(s)\n", y);
    printf("%d mes(es)\n", m);
    printf("%d dia(s)\n", d);

    return 0;
}
