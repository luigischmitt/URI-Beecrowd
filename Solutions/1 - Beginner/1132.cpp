// beecrowd | 1132 (Múltiplos de 13)

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int soma = 0, x, y;

    cin >> x;
    cin >> y;

    if (x > y) {
        for (int i = y; i <= x; i++) {
            if (i % 13 != 0) {
                soma += i;
            }  
        }
    } else {
        for (int i = x; i <= y; i++) {
            if (i % 13 != 0) {
                soma += i;
            }
        }
    }

    cout << soma << "\n";

    return 0;
}
