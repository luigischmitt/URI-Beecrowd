// beecrowd | 1158 (Soma de Ímpares Consecutivos III)

#include <bits/stdc++.h>

using namespace std;

int main() {

    int soma = 0, n, x, y;

    cin >> n;

    while (n--) {
        cin >> x >> y;

        for (int i = 0; i < y; i++) {
            if (x % 2 != 0) {
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
