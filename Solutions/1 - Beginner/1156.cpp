// beecrowd | 1156 (Sequência S II)

#include <bits/stdc++.h>

using namespace std;

int main() {

    float S = 1, j = 2;

    for (float i = 3; i <= 39; i += 2) {
        S += i / j;
        j *= 2;
    }

    cout << fixed << setprecision(2) << S << "\n";

    return 0;
}
