// beecrowd | 1150 (Ultrapassando Z)

#include <bits/stdc++.h>

using namespace std;

int main() {

    int cont = 0, soma = 0, X, Z;

    cin >> X;

    while (1) {
        cin >> Z;

        if (Z > X) {
            break;
        }   
    }

    while (soma <= Z) {
        soma += X;
        X++;
        cont++;
    }
    
    cout << cont << "\n";
    
    return 0;
}
