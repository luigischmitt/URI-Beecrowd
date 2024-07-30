// beecrowd | 1221 (Fast Prime Number)

#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int is_prime(long long int n) {
    if (n <= 1) return 0;         // Numbers less than 2 are not prime
    if (n <= 3) return 1;         // 2 and 3 are prime numbers
    if (n % 2 == 0 || n % 3 == 0) return 0; // Multiples of 2 and 3 are not prime

    for (long long int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);  // Read number of test cases

    while (t--) {
        long long int n;
        scanf("%lld", &n);  // Read each number

        if (is_prime(n)) {
            printf("Prime\n");
        } else {
            printf("Not Prime\n");
        }
    }

    return 0;
}

