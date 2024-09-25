// beecrowd | 1181 (Linha na Matriz)

#include <bits/stdc++.h>

using namespace std;

int main() {

    char option;
    int L;
    float S = 0, M = 0, Matrix[12][12];

    cin >> L;
    cin >> option;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> Matrix[i][j];
        }
    }
    
    if (option == 'S') {
        for (int i = 0; i < 12; i++) {
            S += Matrix[L][i];
        }
        cout << fixed << setprecision(1) << S << "\n";
    } else if (option == 'M') {
        for (int i = 0; i < 12; i++) {
            S += Matrix[L][i];
        }
        M = S / 12;
        cout << fixed << setprecision(1) << M << "\n";
    }

    return 0;
}
