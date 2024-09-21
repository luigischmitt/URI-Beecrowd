// beecrowd | 1178 (Preenchimento de vetor III)

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    double x, n[100];
    
    cin >> x;

    for (int i = 0; i < 100; i++) {
        n[i] = x;
        x /= 2;
        cout << "N[" << i << "] = " << fixed << setprecision(4) << n[i] << endl;
    }

    return 0;
}
