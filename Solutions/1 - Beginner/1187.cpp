// beecrowd | 1187 (Área Superior)

#include <bits/stdc++.h>

using namespace std;

int main() {

    char option;
    double S = 0, M = 0, Matrix[12][12];

    cin >> option;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> Matrix[i][j];
        }
    }
    
    int count = 0;
    if (option == 'S') {
        for (int i = 0; i <= 4; i++) {
            int l = i + 1, r = 11;  
            while (l < r) {
                S += Matrix[i][l];
                l++;
            }
            r--;
        }
        cout << fixed << setprecision(1) << S << "\n";
    } else if (option == 'M') {
        for (int i = 0; i <= 4; i++) {
            int l = i + 1, r = 11;
            while (l < r) {
                S += Matrix[i][l];
                l++;
                count++;
            }
            r--;
        }
        M = S / count;
        cout << fixed << setprecision(1) << M << "\n";
    }

    return 0;
}

