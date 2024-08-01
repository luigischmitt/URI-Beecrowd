// beecrowd | 1165 (Prime Number)

#include <stdio.h>
#include <math.h>

int is_prime(long long int n) {
    if (n <= 1) return 0;         // Numbers less than 2 are not prime
    if (n <= 3) return 1;         // 2 and 3 are prime numbers
    if (n % 2 == 0 || n % 3 == 0) return 0; // Multiples of 2 and 3 are not prime

    for (long long int i = 5; i * i <= n; i += 6) {    // Verify if n is divided by 5 to sqrt(n)
        if (n % i == 0 || n % (i + 2) == 0) 
            return 0;
    }

    return 1;
}

int main() {
    int t;
    scanf("%d", &t);  

    while (t--) {   // While t != 0, it will run
        long long int n;
        scanf("%lld", &n);  // Read each number

        if (is_prime(n)) {
            printf("%d eh primo\n", n);
        } else {
            printf("%d nao eh primo\n", n);
        }
    }

    return 0;
}
