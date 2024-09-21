// beecrowd | 1179 (Preenchimento de vetor IV)

#include <bits/stdc++.h>

using namespace std;

int main() {
    int pares[5], impares[5], valor;
    int countPares = 0, countImpares = 0;

    for (int i = 0; i < 15; i++) {
        cin >> valor;

        if (valor % 2 == 0) {
            pares[countPares] = valor;
            countPares++;
        } else {
            impares[countImpares] = valor;
            countImpares++;
        }

        if (countPares == 5) {
            for (int j = 0; j < 5; j++) {
                cout << "par[" << j << "] = " << pares[j] << endl;
            }
            countPares = 0;
        }

        if (countImpares == 5) {
            for (int j = 0; j < 5; j++) {
                cout << "impar[" << j << "] = " << impares[j] << endl;
            }
            countImpares = 0;
        }
    }

    for (int i = 0; i < countImpares; i++) {
        cout << "impar[" << i << "] = " << impares[i] << endl;
    }

    for (int i = 0; i < countPares; i++) {
        cout << "par[" << i << "] = " << pares[i] << endl;
    }

    return 0;
}
