// beecrowd | 1145 (Sequência Lógica 2)

#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y, contador = 1;

    cin >> x >> y;

    while (contador <= y) {
        for (int j = 0; j < x; j++) {
            if (contador <= y) {
                cout << contador;
                if (j < x - 1) {
                    cout << " ";
                }
                contador++;
            }
        }
        cout << "\n"; 
    }

    return 0;
}
