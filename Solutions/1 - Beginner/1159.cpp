// beecrowd | 1159 (Soma de Pares Consecutivos)

#include <bits/stdc++.h>

using namespace std;

int main() {

    int soma = 0, x;

    while (1) {
        cin >> x;

        if (x == 0)
            break;
        
        for (int i = 0; i < 5; i++) {
            if (x % 2 == 0) {
                soma += x;
                x += 2;
            } else {
                x += 1;
                soma += x;
                x += 2;
            }
        }

        cout << soma << "\n";
        soma = 0;
    }
    
    return 0;
}
