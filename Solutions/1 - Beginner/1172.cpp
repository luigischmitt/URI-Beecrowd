// beecrowd | 1172 (Substituição em Vetor I)

#include <bits/stdc++.h>

using namespace std;

int main() {

    int vetor[10];

    for (int i = 0; i < 10; i++) {
        cin >> vetor[i];
    }
    
    for (int i = 0; i < 10; i++) {
        if (vetor[i] <= 0) {
            cout << "X[" << i << "] = 1\n";
        } else {
            cout << "X[" << i << "] = " << vetor[i] << "\n";
        }   
    }
    
    return 0;
}
