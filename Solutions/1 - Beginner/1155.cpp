// beecrowd | 1155 (Sequência S)

#include <bits/stdc++.h>

using namespace std;

int main() {

    float S = 0;

    for (float i = 1; i <= 100; i++) {
        S += 1 / i;
    }

    cout << fixed << setprecision(2) << S << "\n";
    
    return 0;
}
