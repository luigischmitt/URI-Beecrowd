// beecrowd | 1548 (Fila do Recreio)

#include <stdio.h>

int main() {

    int n, m, m_arr[1001] = {0}, velho_arr[1001] = {0};
    scanf("%d", &n);

    while (n--) {
        scanf("%d", &m);
        for (int i = 0; i < m; i++) {
            scanf("%d", &m_arr[i]);
            velho_arr[i] = m_arr[i];
        }   

        // Bubble sort
        int flag, aux;
        do {
            flag = 0;  // Resetar o flag a cada iteração
            for (int i = 0; i < m - 1; i++) {
                if (m_arr[i] < m_arr[i + 1]) {
                    aux = m_arr[i];
                    m_arr[i] = m_arr[i + 1];
                    m_arr[i + 1] = aux;
                    flag = 1;  
                }
            }
        } while (flag); 

        // Comparar o array ordenado com o original
        int nao_trocaram = 0;
        for (int i = 0; i < m; i++) {
            if (velho_arr[i] == m_arr[i]) {
                nao_trocaram++;
            }
        }

        printf("%d\n", nao_trocaram);
    }

    return 0;
}
