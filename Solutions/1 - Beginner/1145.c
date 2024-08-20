// beecrowd | 1145 (Is the Greater Even or Odd?)

#include <stdio.h>
 
int main() {
 
    int a, b;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    if (a == b) {
        printf("A e B sao iguais.\n");
    } else if (a > b) {
        if (a % 2 == 0) {
            printf("A eh maior e PAR.\n");
        } else {
            printf("A eh maior e IMPAR.\n");
        }
    } else {
        if (b % 2 == 0) {
            printf("B eh maior e PAR.\n");
        } else {
            printf("B eh maior e IMPAR.\n");
        }
    }
    
    return 0;
}
