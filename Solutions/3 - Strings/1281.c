// beecrowd | 1281 (Ida à Feira)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int t, m, n, i, quantidade;
    char produtoCompra[51];
    double totalCompra;

    scanf("%d", &t);

    while(t--){
        scanf("%d", &m);

        char produto[m][51];
        double preco[m];

        for(i = 0; i < m; i++){
            scanf("%s %lf", produto[i], &preco[i]);
        }

        scanf("%d", &n);
        totalCompra = 0;
        
        while(n--){
            scanf("%s %d", produtoCompra, &quantidade);
            for(i = 0; i < m; i++){
                if (strcmp(produtoCompra, produto[i]) == 0){
                    totalCompra += preco[i] * quantidade;
                }
            }
        }

        printf("R$ %.2lf\n", totalCompra);
    }

    return 0;
}
