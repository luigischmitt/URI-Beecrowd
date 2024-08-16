// beecrowd | 1040 (Average 3)

#include <stdio.h>

int main() {

    float final, exame, avg, n1, n2, n3, n4;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    avg = (n1*2 + n2*3 + n3*4 + n4*1) / 10;

    printf("Media: %.1f\n", avg);  
    if (avg >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if (avg >= 5.0 && avg < 7.0) {
        printf("Aluno em exame.\n");
        scanf("%f", &exame);  
        printf("Nota do exame: %.1f\n", exame);
        final = (avg + exame) / 2;  
        if (final >= 5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", final);
    } else {
        printf("Aluno reprovado.\n");
    }

    return 0;
}

