// beecrowd | 2163 (O Despertar da Força)

#include <stdio.h>

int main() {
    int n, m, pos_i = 0, pos_j = 0;

    scanf("%d %d", &n, &m);

    int array[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < m - 1; j++) {
            if (array[i][j] == 42) {
                if (array[i-1][j] == 7 && array[i+1][j] == 7 &&
                    array[i][j-1] == 7 && array[i][j+1] == 7 &&
                    array[i-1][j-1] == 7 && array[i+1][j+1] == 7 &&
                    array[i-1][j+1] == 7 && array[i+1][j-1] == 7) 
                {
                    pos_i = i + 1;
                    pos_j = j + 1;
                }
            }
        }
    }
    
    printf("%d %d\n", pos_i, pos_j);

    return 0;
}

