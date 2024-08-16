// beecrowd | 1019 (Time Conversion)

#include <stdio.h>

int main() {

    int hour, min, sec, n;

    scanf("%d", &n);

    hour = n / 3600;
    n = n % 3600;
    min = n / 60;
    n = n % 60;
    sec = n;

    printf("%d:%d:%d\n", hour, min, sec);

    return 0;
}
