// beecrowd | 1118 (Várias Notas Com Validação)

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float continuar = 0, soma = 0, chances = 2, nota;

    while(1) {
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

        while (continuar != 1 || continuar != 2) {
            cout << "novo calculo (1-sim 2-nao)\n";
            cin >> continuar;   
            if (continuar == 1 || continuar == 2)
                break;
        }

        if (continuar == 2) {
            break;
        } else {
            chances = 2;
            soma = 0;
        }
    }
}
   