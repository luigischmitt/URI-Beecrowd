// beecrowd | 1174 (Seleçao em Vetor I)

#include <bits/stdc++.h>

using namespace std;

int main() {

    float vetor[100];

    for (int i = 0; i < 100; i++) {
        cin >> vetor[i];
    }
    
    for (int i = 0; i < 100; i++) {
        if (vetor[i] <= 10) {
            cout << "A[" << i << "] = " << fixed << setprecision(1) << vetor[i] << "\n";
        }
    }
    
    return 0;
}
