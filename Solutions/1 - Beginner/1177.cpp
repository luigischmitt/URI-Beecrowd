// beecrowd | 1177 (Preenchimento de vetor II)

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int t, n[1000];

    cin >> t;

    for (int i = 0; i < 1000; i++) {
        n[i] = i % t;   // Genial
        cout << "N[" << i << "] = " << n[i] << endl;
    } 

    return 0;
}
