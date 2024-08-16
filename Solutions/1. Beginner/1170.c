// beecrowd | 1170 (Blobs)

#include <stdio.h>

int main() {

    int days = 0, t;
    float food;

    scanf("%d", &t);

    while (t--) {
        days = food = 0;
        scanf("%f", &food);
        while (food > 1.0) {
            food /= 2;
            days += 1;
        }
        printf("%d dias\n", days);
    }

    return 0;
}
