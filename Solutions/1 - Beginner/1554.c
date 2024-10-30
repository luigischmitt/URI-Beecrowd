// beecrowd | 1554 (Bilhar N+1)

#include <stdio.h>

int main() {

    int C; 
    scanf("%d", &C);

    while (C--) {
        int N;  
        scanf("%d", &N);

        int arr_x[N+1], arr_y[N+1];  
        scanf("%d %d", &arr_x[0], &arr_y[0]);  

        int pos = 1;  
        long long menor = -1; 

        for (int i = 1; i <= N; i++) {
            scanf("%d %d", &arr_x[i], &arr_y[i]); 

            // Calcula a distância quadrada (para evitar usar sqrt)
            long long dist_quadrada = (arr_x[i] - arr_x[0]) * (arr_x[i] - arr_x[0]) +
                                      (arr_y[i] - arr_y[0]) * (arr_y[i] - arr_y[0]);

            if (menor == -1 || dist_quadrada < menor) {
                menor = dist_quadrada;
                pos = i;
            }
        }

        printf("%d\n", pos);
    }

    return 0;
}
