// beecrowd | 1017 (Fuel Spent)

#include <stdio.h>

int main() {

    int h, km;
    float spent;

    scanf("%d", &h);
    scanf("%d", &km);
    
    spent = (h*km)/12.0;

    printf("%.3f\n", spent);

    return 0;
}
