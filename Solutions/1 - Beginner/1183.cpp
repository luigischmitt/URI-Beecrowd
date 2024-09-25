// beecrowd | 1183 (Acima da Diagonal Principal)

#include <bits/stdc++.h>

using namespace std;

int main() {

    char option;
    float S = 0, M = 0, Matrix[12][12];

    cin >> option;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> Matrix[i][j];
        }
    }
    
    if (option == 'S') {
        for (int i = 0; i < 12; i++) {
            for (int j = 1; j < 12; j++) {
                if (j > i) {
                    S += Matrix[i][j];
                }   
            }
        }
        cout << fixed << setprecision(1) << S << "\n";
    } else if (option == 'M') {
        for (int i = 0; i < 12; i++) {
            for (int j = 1; j < 12; j++) {
                if (j > i) {
                    S += Matrix[i][j];
                }   
            }
        }
        M = S / 66; // número de elementos acima da diagonal principal
        cout << fixed << setprecision(1) << M << "\n";
    }

    return 0;
}
