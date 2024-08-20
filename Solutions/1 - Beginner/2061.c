// beecrowd | 2061 (As Abas de Péricles)

#include <stdio.h>
 
int main() {
 
    int abas, n;
    char s[10];

    scanf("%d %d", &abas, &n);

    while (n--) {
        scanf("%s", s);
        if (s[0] == 'f') {
            abas++;
        } else if (s[0] == 'c') {
            abas--;
        }
    }

    printf("%d\n", abas);
 
    return 0;
}
