// beecrowd | 1117 (Validação de Nota)

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float soma = 0, chances = 2, nota;

    while (chances != 0) {
        cin >> nota;
        if (nota <= 10 && nota >= 0) {
            soma += nota;
            chances--;
        } else {
            cout << "nota invalida\n";
        }
    }

    cout << "media = " << fixed << setprecision(2) << soma/2.0 << "\n";
    
}
