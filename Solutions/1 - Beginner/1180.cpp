// beecrowd | 1180 (Menor e Posição)

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n, menor = 1001, pos;
    cin >> n;

    int X[n];

    for (int i = 0; i < n; i++) {
        cin >> X[i];
        if (X[i] < menor) {
            menor = X[i];
            pos = i;
        }
    }
    
    cout << "Menor valor: " << menor << "\n";
    cout << "Posicao: " << pos << "\n";

    return 0;
}
