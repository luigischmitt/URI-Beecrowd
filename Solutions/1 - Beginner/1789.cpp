// beecrowd | 1789 (A Corrida de Lesmas)

#include <iostream>

using namespace std;

int main() {
    int n, v, maior = 0;
    
    while (cin >> n) {
        for (int i = 0; i < n; i++) {
            cin >> v;
            if (v > maior) 
                maior = v;
        }
        if (maior < 10)
            cout << 1 << endl;
        if (maior >= 10 && maior < 20)
            cout << 2 << endl;
        if (maior >= 20)
            cout << 3 << endl;
        maior = 0;
    }

    return 0;
}
