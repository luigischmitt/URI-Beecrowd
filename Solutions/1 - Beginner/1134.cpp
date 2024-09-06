// beecrowd | 1134 (Tipo de Combustível)

#include <bits/stdc++.h>

using namespace std;

int main() {

    int resposta, a = 0, g = 0, d = 0;

    while (1) {
        cin >> resposta; 

        if (resposta == 4) {
            cout << "MUITO OBRIGADO\n";
            cout << "Alcool: " << a << "\n";
            cout << "Gasolina: " << g << "\n";
            cout << "Diesel: " << d << "\n";
            break;
        }
        
        if (resposta == 1) {
            a++;
        } else if (resposta == 2) {
            g++;
        } else if (resposta == 3) {
            d++;
        } else {
            continue;
        }
    }

    return 0;
}
