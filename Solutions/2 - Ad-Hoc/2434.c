// beecrowd | 2434 (Saldo do Vovô)

#include <stdio.h>
 
int main() {
 
    int curr, menor, n, s;

    scanf("%d %d", &n, &s);

    menor = s;

    for (int i = 0; i < n; i++) {
        scanf("%d", &curr);
        s += curr;
        if (s <= menor) {
            menor = s;
        }
    }

    printf("%d\n", menor);
    
    return 0;
}
