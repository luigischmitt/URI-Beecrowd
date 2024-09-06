// beecrowd | 1146 (Sequências Crescentes)

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, contador = 1;

    while (1) {

        cin >> n;

        if (n == 0)
            break;
        
        for (int i = 1; i <= n; i++) {
            cout << i;
            if (i <= n - 1) {
                cout << " ";
            }   
        }

        cout << "\n";

    }

    return 0;
}