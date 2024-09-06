// beecrowd | 1149 (Somando Inteiros Consecutivos)

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int soma = 0, A = 0, N = 0;

    cin >> A;

    while (N == 0 || N < 0) {
        cin >> N;
    }
    
    for (int i = 0; i <= N-1; i++) {
        soma += A + i;
    }
    
    cout << soma << "\n";

    return 0;
}
