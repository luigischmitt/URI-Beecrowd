// // beecrowd | 1185 (Acima da Diagonal Secundária)

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
    
    int count = 0;
    if (option == 'S') {
        for (int i = 0; i < 12; i++) {
            for (int j = 0; j < 11 - i; j++) { // j < 11 - i para elementos acima da diagonal secundária
                S += Matrix[i][j];
            }
        }
        cout << fixed << setprecision(1) << S << "\n";
    } else if (option == 'M') {
        for (int i = 0; i < 12; i++) {
            for (int j = 0; j < 11 - i; j++) { // j < 11 - i para elementos acima da diagonal secundária
                S += Matrix[i][j];
                count++;
            }
        }
        M = S / count; // Dividir pelo número correto de elementos
        cout << fixed << setprecision(1) << M << "\n";
    }

    return 0;
}
