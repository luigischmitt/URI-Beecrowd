// beecrowd 1805 (Natural Sum)

#include <stdio.h>
 
int main() {
 
    long long soma = 0, a, b;

    scanf("%lld %lld", &a, &b);
    
    for (; a <= b; a++) {
        soma += a;
    }
    
    printf("%lld\n", soma);
 
    return 0;
}
