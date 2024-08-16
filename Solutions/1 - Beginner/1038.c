// beecrowd | 1038 (Snack)

#include <stdio.h>

int main() {

    int quant, code;

    scanf("%d %d", &code, &quant);

    if (code == 1) {
        printf("Total: R$ %.2f\n", 4.0*quant);
    } else if (code == 2) {
        printf("Total: R$ %.2f\n", 4.5*quant);
    } else if (code == 3) {
        printf("Total: R$ %.2f\n", 5.0*quant);
    } else if (code == 4) {
        printf("Total: R$ %.2f\n", 2.0*quant);
    } else {
        printf("Total: R$ %.2f\n", 1.5*quant);
    }

    return 0;
}
