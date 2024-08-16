// beecrowd | 1026 (To Carry or not to Carry)

#include <stdio.h>

int main() {

    unsigned a, b;

    while (scanf("%u %u", &a, &b) != EOF) { 
        printf("%u\n", a ^ b);                  // XOR -> 0 1 1 0
    }

    return 0;
}
