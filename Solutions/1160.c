// beecrowd | 1160 (Population Increase)

#include <stdio.h>

int main() {

    int time, pa, pb, test_case, count=1;
    double ga, gb;

    scanf("%d", &test_case);

    for (count; count <= test_case; count++) {
        scanf("%d %d %lf %lf", &pa, &pb, &ga, &gb);
        time = 0;
        while (pa <= pb) 
        {
            pa *= (ga / 100.0) + 1.0;
            pb *= (gb / 100.0) + 1.0;
            ++time;
            if (time > 100) {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if (time <= 100) {
            printf("%d anos.\n", time);
        }
    }
    
    return 0;
}
