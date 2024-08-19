// beecrowd | 1061 (Event Time)

#include <stdio.h>

int main() {
 
    int total = 0, total1 = 0, total2 = 0;
    int dayT, hT, mT, sT;
    int day, h, m, s;
    int day2, h2, m2, s2;

    scanf("%*c%*c%*c %d", &day);
    scanf("%d : %d : %d", &h, &m, &s);

    printf("%d d %d h %d m %d s\n", day, h, m, s);

    scanf("%*c%*c%*c %d", &day2);
    scanf("%d : %d : %d", &h2, &m2, &s2);

    total1 += (24*day)*3600 + (h*3600) + (m*60) + s;
    total2 += (24*day2)*3600 + (h2*3600) + (m2*60) + s2;

    total = total2 - total1;

    printf("%d s\n", total);

    return 0;
}
