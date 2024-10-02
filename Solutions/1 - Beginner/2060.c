// beecrowd | 2060 (Desafio de Bino)

#include <stdio.h>

int main() {

    int dois=0, tres=0, quatro=0, cinco=0;
    int n, x;

    scanf("%d", &n);

    while (n--) {
        scanf("%d", &x);

        if (x % 2 == 0) {
            dois += 1;
        }

        if (x % 3 == 0) {
            tres += 1;
        }

        if (x % 4 == 0) {
            quatro += 1;
        }

        if (x % 5 == 0) {
            cinco += 1;
        }
    }

    printf("%d Multiplo(s) de 2\n", dois);
    printf("%d Multiplo(s) de 3\n", tres);
    printf("%d Multiplo(s) de 4\n", quatro);
    printf("%d Multiplo(s) de 5\n", cinco);

    return 0;
}
