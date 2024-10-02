// beecrowd | 1182 (Coluna na Matriz)

#include <stdio.h>

int main() {

    char option;
    int C;
    float S = 0, M = 0, Matrix[12][12];

    scanf("%d%*c", &C);    
    scanf("%c", &option);  
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%f", &Matrix[i][j]);  
        }
    }
    
    if (option == 'S') {
        for (int i = 0; i < 12; i++) {
            S += Matrix[i][C];  
        }
        printf("%.1f\n", S);    
    } else if (option == 'M') {
        for (int i = 0; i < 12; i++) {
            S += Matrix[i][C];  
        }
        M = S / 12;            
        printf("%.1f\n", M);    
    }

    return 0;
}

