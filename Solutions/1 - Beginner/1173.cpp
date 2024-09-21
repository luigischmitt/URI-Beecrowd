// beecrowd | 1173 (Preenchimento de Vetor I)

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, vetor[10];

    cin >> n;

    vetor[0] = n;

    for (int i = 1; i < 10; i++) {
        n = 2*n;
        vetor[i] = n;
    }

    for (int i = 0; i < 10; i++) {
        cout << "N[" << i << "] = " << vetor[i] << "\n";
    }
    
    return 0;
}
