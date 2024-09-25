// beecrowd | 1182 (Coluna na Matriz)

#include <bits/stdc++.h>

using namespace std;

int main() {

    char option;
    int C;
    float S = 0, M = 0, Matrix[12][12];

    cin >> C;
    cin >> option;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> Matrix[i][j];
        }
    }
    
    if (option == 'S') {
        for (int i = 0; i < 12; i++) {
            S += Matrix[i][C];
        }
        cout << fixed << setprecision(1) << S << "\n";
    } else if (option == 'M') {
        for (int i = 0; i < 12; i++) {
            S += Matrix[i][C];
        }
        M = S / 12;
        cout << fixed << setprecision(1) << M << "\n";
    }

    return 0;
}
