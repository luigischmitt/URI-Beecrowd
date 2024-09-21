// beecrowd | 1175 (Troca em Vetor I)

#include <bits/stdc++.h>

using namespace std;

int main() {

    int l = 0, r = 19, vetor[20];

    for (int i = 0; i < 20; i++) {
        cin >> vetor[i];
    }
    
    while (l < r) {
        int temp = vetor[l];
        vetor[l] = vetor[r];
        vetor[r] = temp;
        l += 1;
        r -= 1;
    }
    
    for (int i = 0; i < 20; i++) {
        cout << "N[" << i << "] = " << vetor[i] << "\n";
    }
    
    return 0;
}
