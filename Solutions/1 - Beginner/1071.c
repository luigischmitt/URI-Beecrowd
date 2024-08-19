// beecrowd | 1071 (Sum of Consecutive Odd Numbers I)

#include <stdio.h>

int main() {

    int sum = 0, a, b, i;
        
    scanf("%d %d", &a, &b);

    if (a > b) {        // Swap a and b if a > b
        int temp = a;
        a = b;
        b = temp;
    }

    for (i = a + 1; i < b; i++) {
        if (i % 2 != 0) {  
            sum += i; 
        }
    }

    printf("%d\n", sum);

    return 0;
}
